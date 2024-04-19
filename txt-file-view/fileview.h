#ifndef FILEVIEW_H
#define FILEVIEW_H

#include <QWidget>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QFileInfoList>
#include <QTextStream>
using namespace std;

namespace Ui {
class FileView;
}

class FileView : public QWidget
{
    Q_OBJECT

public:
    explicit FileView(QWidget *parent = nullptr);
    FileView(QWidget *parent, QDir path);
    ~FileView();

public slots:
    void createList();
    void initializeFileListWidget();
    void onDisplayContents(QString fileName);
    void testList(QString path, bool recursive = false);
    void testModify(QDir root);

signals:
    void displayContents(QString fileName);

private slots:
    void on_fileList_clicked(const QModelIndex &index);

private:
    Ui::FileView *ui;
    QDir        path;
    QStringList fileNames;

};

#endif // FILEVIEW_H
