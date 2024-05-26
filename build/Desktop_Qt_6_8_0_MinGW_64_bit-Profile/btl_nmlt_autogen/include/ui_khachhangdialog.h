/********************************************************************************
** Form generated from reading UI file 'khachhangdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KHACHHANGDIALOG_H
#define UI_KHACHHANGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_KhachHangDialog
{
public:
    QLabel *lbdiachi;
    QLabel *blten;
    QLineEdit *nhapsdt;
    QLineEdit *nhapten;
    QLabel *lbsdt;
    QLineEdit *nhapdiachi;
    QLabel *lbemail;
    QLineEdit *nhapemail;
    QLabel *lbsodien;
    QLineEdit *nhapsodien;
    QDateEdit *dengaysinh;
    QLabel *label;
    QLabel *lbtieude;
    QPushButton *btnhuy;
    QPushButton *btnxacnhan;
    QLabel *background;

    void setupUi(QDialog *KhachHangDialog)
    {
        if (KhachHangDialog->objectName().isEmpty())
            KhachHangDialog->setObjectName("KhachHangDialog");
        KhachHangDialog->resize(600, 370);
        KhachHangDialog->setMinimumSize(QSize(597, 0));
        lbdiachi = new QLabel(KhachHangDialog);
        lbdiachi->setObjectName("lbdiachi");
        lbdiachi->setGeometry(QRect(10, 150, 111, 16));
        lbdiachi->setMinimumSize(QSize(70, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        lbdiachi->setFont(font);
        blten = new QLabel(KhachHangDialog);
        blten->setObjectName("blten");
        blten->setGeometry(QRect(10, 90, 121, 16));
        blten->setMinimumSize(QSize(70, 0));
        blten->setFont(font);
        nhapsdt = new QLineEdit(KhachHangDialog);
        nhapsdt->setObjectName("nhapsdt");
        nhapsdt->setGeometry(QRect(130, 120, 121, 22));
        nhapsdt->setMaxLength(11);
        nhapten = new QLineEdit(KhachHangDialog);
        nhapten->setObjectName("nhapten");
        nhapten->setGeometry(QRect(130, 90, 121, 22));
        nhapten->setStyleSheet(QString::fromUtf8(""));
        nhapten->setMaxLength(100);
        lbsdt = new QLabel(KhachHangDialog);
        lbsdt->setObjectName("lbsdt");
        lbsdt->setGeometry(QRect(10, 120, 121, 16));
        lbsdt->setMinimumSize(QSize(70, 0));
        lbsdt->setFont(font);
        nhapdiachi = new QLineEdit(KhachHangDialog);
        nhapdiachi->setObjectName("nhapdiachi");
        nhapdiachi->setGeometry(QRect(130, 150, 121, 22));
        nhapdiachi->setMaxLength(1000);
        lbemail = new QLabel(KhachHangDialog);
        lbemail->setObjectName("lbemail");
        lbemail->setGeometry(QRect(10, 180, 121, 20));
        lbemail->setMinimumSize(QSize(70, 0));
        lbemail->setFont(font);
        nhapemail = new QLineEdit(KhachHangDialog);
        nhapemail->setObjectName("nhapemail");
        nhapemail->setGeometry(QRect(130, 180, 121, 22));
        nhapemail->setMaxLength(100);
        lbsodien = new QLabel(KhachHangDialog);
        lbsodien->setObjectName("lbsodien");
        lbsodien->setGeometry(QRect(10, 210, 111, 20));
        lbsodien->setMinimumSize(QSize(70, 0));
        lbsodien->setFont(font);
        nhapsodien = new QLineEdit(KhachHangDialog);
        nhapsodien->setObjectName("nhapsodien");
        nhapsodien->setGeometry(QRect(130, 210, 121, 22));
        nhapsodien->setMaxLength(5);
        dengaysinh = new QDateEdit(KhachHangDialog);
        dengaysinh->setObjectName("dengaysinh");
        dengaysinh->setGeometry(QRect(360, 85, 151, 31));
        label = new QLabel(KhachHangDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 90, 101, 21));
        label->setFont(font);
        lbtieude = new QLabel(KhachHangDialog);
        lbtieude->setObjectName("lbtieude");
        lbtieude->setGeometry(QRect(90, 20, 551, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(16);
        font1.setBold(true);
        lbtieude->setFont(font1);
        lbtieude->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        btnhuy = new QPushButton(KhachHangDialog);
        btnhuy->setObjectName("btnhuy");
        btnhuy->setGeometry(QRect(325, 290, 110, 40));
        btnhuy->setMinimumSize(QSize(35, 35));
        QFont font2;
        font2.setPointSize(14);
        btnhuy->setFont(font2);
        btnhuy->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        btnxacnhan = new QPushButton(KhachHangDialog);
        btnxacnhan->setObjectName("btnxacnhan");
        btnxacnhan->setGeometry(QRect(165, 290, 110, 40));
        btnxacnhan->setMinimumSize(QSize(35, 35));
        btnxacnhan->setFont(font2);
        btnxacnhan->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        background = new QLabel(KhachHangDialog);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 600, 370));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/res/Screenshot 2024-05-14 235710.png);"));
        background->raise();
        lbdiachi->raise();
        blten->raise();
        nhapsdt->raise();
        nhapten->raise();
        lbsdt->raise();
        nhapdiachi->raise();
        lbemail->raise();
        nhapemail->raise();
        lbsodien->raise();
        nhapsodien->raise();
        dengaysinh->raise();
        label->raise();
        lbtieude->raise();
        btnhuy->raise();
        btnxacnhan->raise();

        retranslateUi(KhachHangDialog);

        QMetaObject::connectSlotsByName(KhachHangDialog);
    } // setupUi

    void retranslateUi(QDialog *KhachHangDialog)
    {
        KhachHangDialog->setWindowTitle(QCoreApplication::translate("KhachHangDialog", "Dialog", nullptr));
        lbdiachi->setText(QCoreApplication::translate("KhachHangDialog", "\304\220\341\273\213a Ch\341\273\211            :", nullptr));
        blten->setText(QCoreApplication::translate("KhachHangDialog", "H\341\273\215 v\303\240 T\303\252n        :", nullptr));
        lbsdt->setText(QCoreApplication::translate("KhachHangDialog", "S\341\273\221 \304\220i\341\273\207n Tho\341\272\241i :", nullptr));
        lbemail->setText(QCoreApplication::translate("KhachHangDialog", "Email               :", nullptr));
        lbsodien->setText(QCoreApplication::translate("KhachHangDialog", "S\341\273\221 \304\220i\341\273\207n           :", nullptr));
        nhapsodien->setText(QString());
        dengaysinh->setDisplayFormat(QCoreApplication::translate("KhachHangDialog", "d/M/yyyy", nullptr));
        label->setText(QCoreApplication::translate("KhachHangDialog", "Ng\303\240y Sinh  :", nullptr));
        lbtieude->setText(QCoreApplication::translate("KhachHangDialog", "CH\341\273\210NH S\341\273\254A TH\303\224NG TIN KH\303\201CH H\303\200NG", nullptr));
        btnhuy->setText(QCoreApplication::translate("KhachHangDialog", "h\341\273\247y ", nullptr));
        btnxacnhan->setText(QCoreApplication::translate("KhachHangDialog", "x\303\241c nh\341\272\255n", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KhachHangDialog: public Ui_KhachHangDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KHACHHANGDIALOG_H
