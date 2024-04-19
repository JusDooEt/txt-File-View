/********************************************************************************
** Form generated from reading UI file 'fileview.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEVIEW_H
#define UI_FILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileView
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *fileListGroup;
    QVBoxLayout *verticalLayout;
    QListWidget *fileList;
    QGroupBox *contentsGroup;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *contentsTextEdit;

    void setupUi(QWidget *FileView)
    {
        if (FileView->objectName().isEmpty())
            FileView->setObjectName("FileView");
        FileView->resize(640, 480);
        verticalLayout_3 = new QVBoxLayout(FileView);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        fileListGroup = new QGroupBox(FileView);
        fileListGroup->setObjectName("fileListGroup");
        fileListGroup->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(fileListGroup);
        verticalLayout->setObjectName("verticalLayout");
        fileList = new QListWidget(fileListGroup);
        fileList->setObjectName("fileList");

        verticalLayout->addWidget(fileList);


        horizontalLayout_2->addWidget(fileListGroup);

        contentsGroup = new QGroupBox(FileView);
        contentsGroup->setObjectName("contentsGroup");
        verticalLayout_2 = new QVBoxLayout(contentsGroup);
        verticalLayout_2->setObjectName("verticalLayout_2");
        contentsTextEdit = new QTextEdit(contentsGroup);
        contentsTextEdit->setObjectName("contentsTextEdit");

        verticalLayout_2->addWidget(contentsTextEdit);


        horizontalLayout_2->addWidget(contentsGroup);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(FileView);

        QMetaObject::connectSlotsByName(FileView);
    } // setupUi

    void retranslateUi(QWidget *FileView)
    {
        FileView->setWindowTitle(QCoreApplication::translate("FileView", "Form", nullptr));
        fileListGroup->setTitle(QCoreApplication::translate("FileView", "Files", nullptr));
        contentsGroup->setTitle(QCoreApplication::translate("FileView", "Contents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileView: public Ui_FileView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEVIEW_H
