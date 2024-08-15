/********************************************************************************
** Form generated from reading UI file 'savepopup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEPOPUP_H
#define UI_SAVEPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SavePopUp
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QMainWindow *SavePopUp)
    {
        if (SavePopUp->objectName().isEmpty())
            SavePopUp->setObjectName("SavePopUp");
        SavePopUp->resize(300, 100);
        centralwidget = new QWidget(SavePopUp);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 111, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 40, 171, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 70, 80, 18));
        SavePopUp->setCentralWidget(centralwidget);

        retranslateUi(SavePopUp);

        QMetaObject::connectSlotsByName(SavePopUp);
    } // setupUi

    void retranslateUi(QMainWindow *SavePopUp)
    {
        SavePopUp->setWindowTitle(QCoreApplication::translate("SavePopUp", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SavePopUp", "Save File As:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("SavePopUp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("SavePopUp", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SavePopUp: public Ui_SavePopUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEPOPUP_H
