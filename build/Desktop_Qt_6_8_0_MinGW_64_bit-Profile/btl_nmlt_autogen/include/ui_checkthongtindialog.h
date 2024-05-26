/********************************************************************************
** Form generated from reading UI file 'checkthongtindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKTHONGTINDIALOG_H
#define UI_CHECKTHONGTINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckThongTinDialog
{
public:
    QLabel *lbtieude;
    QLabel *lbemail;
    QLabel *lbsdt;
    QLabel *lbngaysinh;
    QLabel *lbdiachi;
    QLabel *lbten;
    QPushButton *pushButton;
    QLabel *background;

    void setupUi(QDialog *CheckThongTinDialog)
    {
        if (CheckThongTinDialog->objectName().isEmpty())
            CheckThongTinDialog->setObjectName("CheckThongTinDialog");
        CheckThongTinDialog->resize(427, 458);
        lbtieude = new QLabel(CheckThongTinDialog);
        lbtieude->setObjectName("lbtieude");
        lbtieude->setGeometry(QRect(90, 40, 551, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(16);
        font.setBold(true);
        lbtieude->setFont(font);
        lbtieude->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbemail = new QLabel(CheckThongTinDialog);
        lbemail->setObjectName("lbemail");
        lbemail->setGeometry(QRect(20, 280, 411, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        lbemail->setFont(font1);
        lbemail->setStyleSheet(QString::fromUtf8("color :rgb(255, 255,255)"));
        lbsdt = new QLabel(CheckThongTinDialog);
        lbsdt->setObjectName("lbsdt");
        lbsdt->setGeometry(QRect(20, 200, 461, 31));
        lbsdt->setFont(font1);
        lbsdt->setStyleSheet(QString::fromUtf8("color :rgb(255, 255,255)"));
        lbngaysinh = new QLabel(CheckThongTinDialog);
        lbngaysinh->setObjectName("lbngaysinh");
        lbngaysinh->setGeometry(QRect(20, 240, 441, 31));
        lbngaysinh->setFont(font1);
        lbngaysinh->setStyleSheet(QString::fromUtf8("color :rgb(255, 255,255)"));
        lbdiachi = new QLabel(CheckThongTinDialog);
        lbdiachi->setObjectName("lbdiachi");
        lbdiachi->setGeometry(QRect(20, 160, 411, 31));
        lbdiachi->setFont(font1);
        lbdiachi->setStyleSheet(QString::fromUtf8("color :rgb(255, 255,255)"));
        lbten = new QLabel(CheckThongTinDialog);
        lbten->setObjectName("lbten");
        lbten->setGeometry(QRect(20, 120, 471, 31));
        lbten->setFont(font1);
        lbten->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(CheckThongTinDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(143, 350, 151, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"   border-style: solid;\n"
"	border-width: 3px;\n"
"	border-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.698, fx:0.505455, fy:0.499682, stop:0 rgba(225, 166, 255, 255), stop:0.767045 rgba(94, 191, 230, 255));\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"   border-radius: 20px ;\n"
"   background-color: rgb(85, 170, 255);\n"
"   \n"
"}\n"
"\n"
"QPushButton:Horve\n"
"{\n"
"  background-color: rgb(85, 170, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:enabled\n"
"{\n"
"  background-color: rgb(85, 170, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color: rgb(19, 121, 255);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:!pressed\n"
"{\n"
"   background-color: rgb(85, 170, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"  background-color: #aaaaaa;\n"
"  color: rgb(0, 0, 0);\n"
"}"));
        background = new QLabel(CheckThongTinDialog);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 427, 458));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Script")});
        background->setFont(font2);
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/res/Screenshot 2024-05-14 235710.png);"));
        background->raise();
        lbtieude->raise();
        lbemail->raise();
        lbsdt->raise();
        lbngaysinh->raise();
        lbdiachi->raise();
        lbten->raise();
        pushButton->raise();

        retranslateUi(CheckThongTinDialog);

        QMetaObject::connectSlotsByName(CheckThongTinDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckThongTinDialog)
    {
        CheckThongTinDialog->setWindowTitle(QCoreApplication::translate("CheckThongTinDialog", "Dialog", nullptr));
        lbtieude->setText(QCoreApplication::translate("CheckThongTinDialog", "th\303\264ng tin kh\303\241ch h\303\240ng ", nullptr));
        lbemail->setText(QCoreApplication::translate("CheckThongTinDialog", "email", nullptr));
        lbsdt->setText(QCoreApplication::translate("CheckThongTinDialog", "SDT", nullptr));
        lbngaysinh->setText(QCoreApplication::translate("CheckThongTinDialog", "ng\303\240y sinh", nullptr));
        lbdiachi->setText(QCoreApplication::translate("CheckThongTinDialog", "dia chi", nullptr));
        lbten->setText(QCoreApplication::translate("CheckThongTinDialog", "t\303\252n", nullptr));
        pushButton->setText(QCoreApplication::translate("CheckThongTinDialog", "X\303\241c Nh\341\272\255n", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CheckThongTinDialog: public Ui_CheckThongTinDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKTHONGTINDIALOG_H
