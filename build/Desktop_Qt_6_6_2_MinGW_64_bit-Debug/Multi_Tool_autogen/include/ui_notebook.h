/********************************************************************************
** Form generated from reading UI file 'notebook.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEBOOK_H
#define UI_NOTEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteBook
{
public:
    QWidget *centralwidget;
    QLabel *NT_Header;
    QPushButton *goBack;
    QPushButton *openFile;
    QPushButton *saveNote;
    QPushButton *clearNote;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *NoteBook)
    {
        if (NoteBook->objectName().isEmpty())
            NoteBook->setObjectName("NoteBook");
        NoteBook->resize(1200, 800);
        centralwidget = new QWidget(NoteBook);
        centralwidget->setObjectName("centralwidget");
        NT_Header = new QLabel(centralwidget);
        NT_Header->setObjectName("NT_Header");
        NT_Header->setGeometry(QRect(400, 20, 400, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Viner Hand ITC")});
        font.setPointSize(40);
        NT_Header->setFont(font);
        NT_Header->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NT_Header->setAlignment(Qt::AlignmentFlag::AlignCenter);
        goBack = new QPushButton(centralwidget);
        goBack->setObjectName("goBack");
        goBack->setGeometry(QRect(50, 20, 120, 40));
        openFile = new QPushButton(centralwidget);
        openFile->setObjectName("openFile");
        openFile->setGeometry(QRect(150, 170, 80, 18));
        QPalette palette;
        QBrush brush(QColor(0, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(208, 208, 208, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(64, 65, 66, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QBrush brush4(QColor(164, 166, 168, 96));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        openFile->setPalette(palette);
        saveNote = new QPushButton(centralwidget);
        saveNote->setObjectName("saveNote");
        saveNote->setGeometry(QRect(250, 170, 80, 18));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        saveNote->setPalette(palette1);
        clearNote = new QPushButton(centralwidget);
        clearNote->setObjectName("clearNote");
        clearNote->setGeometry(QRect(50, 170, 80, 18));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        clearNote->setPalette(palette2);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 200, 1100, 550));
        NoteBook->setCentralWidget(centralwidget);
        openFile->raise();
        saveNote->raise();
        textEdit->raise();
        NT_Header->raise();
        clearNote->raise();
        goBack->raise();

        retranslateUi(NoteBook);

        QMetaObject::connectSlotsByName(NoteBook);
    } // setupUi

    void retranslateUi(QMainWindow *NoteBook)
    {
        NoteBook->setWindowTitle(QCoreApplication::translate("NoteBook", "MainWindow", nullptr));
        NT_Header->setText(QCoreApplication::translate("NoteBook", "NOTETAKER", nullptr));
        goBack->setText(QCoreApplication::translate("NoteBook", "Go Home", nullptr));
        openFile->setText(QCoreApplication::translate("NoteBook", "Open", nullptr));
        saveNote->setText(QCoreApplication::translate("NoteBook", "Save", nullptr));
        clearNote->setText(QCoreApplication::translate("NoteBook", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteBook: public Ui_NoteBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEBOOK_H
