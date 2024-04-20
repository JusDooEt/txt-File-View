#include "fileview.h"
#include "ui_fileview.h"

FileView::FileView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FileView)
    , path(QDir::currentPath())
{
    ui->setupUi(this);
    this->setGeometry(parent->geometry());
    createList();
    initializeFileListWidget();

    connect(this, &FileView::displayContents, this, &FileView::onDisplayContents);
}

FileView::FileView(QWidget *parent, QDir path)
    : QWidget(parent)
    , ui(new Ui::FileView)
    , path(path)
{
    ui->setupUi(this);
    this->setGeometry(parent->geometry());
    createList();
    initializeFileListWidget();

    connect(this, &FileView::displayContents, this, &FileView::onDisplayContents);
}

FileView::~FileView()
{
    delete ui;
}

void FileView::createList()
{

    if(!path.exists("txtFiles"))
    {
        qInfo() << "dir txtFiles does not exist";
        return;
    }

    QDir dir("txtFiles");
    path = dir;

    // Create lists for files
    //fileNames = path.entryList(QStringList() << "*.txt" << "*.TXT",QDir::NoDotAndDotDot | QDir::Files, QDir::Time);
    fileInfoList = path.entryInfoList(QDir::NoDotAndDotDot | QDir::Files, QDir::SortFlag::Time);

    // Debugging
    // foreach (QString name, fileNames) {
    //     qInfo() << "-----------------------";
    //     qInfo() << "Name: " << name;
    // }
    foreach (auto fileInfo, fileInfoList)
    {
        qInfo() << fileInfo.fileName() << fileInfo.lastModified().toString();
    }
}

void FileView::initializeFileListWidget()
{
    int i = 0;
    while(i < fileInfoList.size() && i < MAX_FILES)
    {
        ui->fileList->addItem(fileInfoList[i].fileName() + '\n' + fileInfoList[i].lastModified().toString() + '\n');
        i++;
    }
}

void FileView::onDisplayContents(QString fileName)
{
    qInfo() << "Current Path: " << QDir::currentPath();
    if(!QDir::setCurrent(path.absolutePath()))
    {
        qInfo() << "Error setting current dir to " << path.absolutePath();
        return;
    }
    qInfo() << "Current Path: " << QDir::currentPath();

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qInfo() << "Error opening file: " << fileName;
        return;
    }

    //QTextStream fin(&file);
    ui->contentsTextEdit->setText(file.readAll());
    file.close();
    QDir::setCurrent("..");
    qInfo() << "Current Path: " << QDir::currentPath();

}

void FileView::testList(QString path, bool recursive)
{
    QDir root(path);
    if(!root.exists())
    {
        qWarning() << "Path not found " << path;
        return;
    }

    QFileInfoList list = root.entryInfoList(QDir::Filter::NoDotAndDotDot | QDir::Filter::AllEntries);

    foreach (QFileInfo fi, list)
    {
        qInfo() << "-----------------------";
        qInfo() << "Name: " << fi.fileName();
        qInfo() << "Path: " << fi.filePath();
        qInfo() << "Absolute: " << fi.absoluteFilePath();
        qInfo() << "Created: " << fi.birthTime().toString();
        qInfo() << "Modified: " << fi.lastModified().toString();
        qInfo() << "Size: " << fi.size();

        QString type = "Uknown";
        fi.isDir() ? type = "Dir" : type = "File";
        qInfo() << "Type" << type;

        if(recursive && fi.isDir())
            testList(fi.absoluteFilePath());
    }
}

void FileView::testModify(QDir root)
{
    if(root.exists("test"))
    {
        qInfo() << "Test folder already exists";
        return;
    }

    if(root.mkdir("test"))
    {
        QDir dir("test");
        qInfo() << "Created: " << dir.absolutePath();

        if(root.rename("test", "test2"))
        {
            qInfo() << "Renamed: " << dir.absolutePath();   // This points to a dir that no longer exists
            qInfo() << "Test: " << dir.exists();    // This points to a dir that no longer exists

            if(root.exists("test2"))
            {
                if(!root.rmdir("test2"))
                {
                    qInfo() << "Failed - could not remove the directory!";
                }
            }
        }
    }
}

void FileView::on_fileList_clicked(const QModelIndex &index)
{
    qInfo() << index.row();

    emit displayContents(fileInfoList[index.row()].fileName());
}

