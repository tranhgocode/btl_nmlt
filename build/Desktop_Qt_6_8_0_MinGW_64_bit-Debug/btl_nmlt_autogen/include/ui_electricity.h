/********************************************************************************
** Form generated from reading UI file 'electricity.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTRICITY_H
#define UI_ELECTRICITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_electricity
{
public:
    QWidget *centralwidget;
    QLabel *lbdanhsach;
    QPushButton *btnhoadon;
    QPushButton *btnremove;
    QPushButton *btnadd;
    QPushButton *btncheck;
    QLabel *logo;
    QLabel *background;
    QPushButton *btnthoat;
    QListWidget *bangkhachhang;
    QLabel *label;

    void setupUi(QMainWindow *electricity)
    {
        if (electricity->objectName().isEmpty())
            electricity->setObjectName("electricity");
        electricity->resize(800, 600);
        electricity->setMinimumSize(QSize(800, 600));
        electricity->setMaximumSize(QSize(800, 600));
        electricity->setLayoutDirection(Qt::LeftToRight);
        electricity->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(electricity);
        centralwidget->setObjectName("centralwidget");
        lbdanhsach = new QLabel(centralwidget);
        lbdanhsach->setObjectName("lbdanhsach");
        lbdanhsach->setGeometry(QRect(150, 60, 341, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Small")});
        font.setPointSize(20);
        font.setBold(true);
        lbdanhsach->setFont(font);
        lbdanhsach->setAutoFillBackground(false);
        btnhoadon = new QPushButton(centralwidget);
        btnhoadon->setObjectName("btnhoadon");
        btnhoadon->setGeometry(QRect(560, 330, 160, 45));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        btnhoadon->setFont(font1);
        btnhoadon->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  border-style: solid;\n"
"	border-width: 3px;\n"
"	\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(32, 0, 255, 255), stop:0.545455 rgba(179, 13, 235, 255), stop:1 rgba(68, 35, 193, 255));\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"   border-radius: 20px ;\n"
"   background-color: rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton:enabled\n"
"{\n"
" background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color: rgb(85, 0, 255);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:!pressed\n"
"{\n"
"  background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"  background-color: #aaaaaa;\n"
"  color: rgb(0, 0, 0);\n"
"}"));
        btnremove = new QPushButton(centralwidget);
        btnremove->setObjectName("btnremove");
        btnremove->setGeometry(QRect(670, 130, 41, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(26);
        font2.setBold(true);
        btnremove->setFont(font2);
        btnremove->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-style: solid;\n"
"	border-width: 3px;\n"
"	\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(32, 0, 255, 255), stop:0.545455 rgba(179, 13, 235, 255), stop:1 rgba(68, 35, 193, 255));\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"   border-radius: 13px ;\n"
"   background-color: rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton:enabled\n"
"{\n"
" background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color: rgb(85, 0, 255);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:!pressed\n"
"{\n"
"  background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"  background-color: #aaaaaa;\n"
"  color: rgb(0, 0, 0);\n"
"}"));
        btnadd = new QPushButton(centralwidget);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(550, 130, 41, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(20);
        font3.setBold(true);
        btnadd->setFont(font3);
        btnadd->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  border-style: solid;\n"
"	border-width: 3px;\n"
"	\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(32, 0, 255, 255), stop:0.545455 rgba(179, 13, 235, 255), stop:1 rgba(68, 35, 193, 255));\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"   border-radius: 13px ;\n"
"   background-color: rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton:enabled\n"
"{\n"
" background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color: rgb(85, 0, 255);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:!pressed\n"
"{\n"
"  background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"  background-color: #aaaaaa;\n"
"  color: rgb(0, 0, 0);\n"
"}"));
        btncheck = new QPushButton(centralwidget);
        btncheck->setObjectName("btncheck");
        btncheck->setGeometry(QRect(560, 220, 160, 45));
        btncheck->setFont(font1);
        btncheck->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"   border-style: solid;\n"
"	border-width: 3px;\n"
"	\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(32, 0, 255, 255), stop:0.545455 rgba(179, 13, 235, 255), stop:1 rgba(68, 35, 193, 255));\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"   border-radius: 20px ;\n"
"   background-color: rgb(85, 85, 255);\n"
"   \n"
"}\n"
"\n"
"QPushButton:Horve\n"
"{\n"
" background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:enabled\n"
"{\n"
" background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color: rgb(85, 0, 255);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:!pressed\n"
"{\n"
"  background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"  background-color: #aaaaaa;\n"
"  color: rgb(0, 0, 0);\n"
"}"));
        btncheck->setCheckable(false);
        btncheck->setChecked(false);
        btncheck->setAutoRepeat(false);
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(600, 20, 101, 91));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/res/img1);"));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 800, 600));
        background->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/res/muon-chuyen-doi-so-cac-doanh-nghiep-can-tu-duy-moi-khong-chi-cong-nghe-moi-scaled.jpg);"));
        btnthoat = new QPushButton(centralwidget);
        btnthoat->setObjectName("btnthoat");
        btnthoat->setGeometry(QRect(560, 440, 160, 45));
        btnthoat->setFont(font1);
        btnthoat->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"  border-style: solid;\n"
"	border-width: 3px;\n"
"	\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(32, 0, 255, 255), stop:0.545455 rgba(179, 13, 235, 255), stop:1 rgba(68, 35, 193, 255));\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"   border-radius: 20px ;\n"
"   background-color: rgb(85, 85, 255);\n"
"   \n"
"}\n"
"\n"
"QPushButton:enabled\n"
"{\n"
" background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color: rgb(85, 0, 255);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:!pressed\n"
"{\n"
"  background-color: rgb(85, 85, 255);\n"
"  color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"  background-color: #aaaaaa;\n"
"  color: rgb(0, 0, 0);\n"
"}"));
        bangkhachhang = new QListWidget(centralwidget);
        bangkhachhang->setObjectName("bangkhachhang");
        bangkhachhang->setGeometry(QRect(50, 130, 441, 441));
        QFont font4;
        font4.setPointSize(14);
        bangkhachhang->setFont(font4);
        bangkhachhang->setStyleSheet(QString::fromUtf8("selection-background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.698, fx:0.505455, fy:0.499682, stop:0 rgba(225, 166, 255, 255), stop:0.767045 rgba(94, 191, 230, 255));\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 110, 441, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        electricity->setCentralWidget(centralwidget);
        background->raise();
        lbdanhsach->raise();
        btnhoadon->raise();
        btnremove->raise();
        btnadd->raise();
        btncheck->raise();
        logo->raise();
        btnthoat->raise();
        bangkhachhang->raise();
        label->raise();

        retranslateUi(electricity);

        QMetaObject::connectSlotsByName(electricity);
    } // setupUi

    void retranslateUi(QMainWindow *electricity)
    {
        electricity->setWindowTitle(QCoreApplication::translate("electricity", "electricity", nullptr));
        lbdanhsach->setText(QCoreApplication::translate("electricity", "Danh s\303\241ch kh\303\241ch h\303\240ng ", nullptr));
        btnhoadon->setText(QCoreApplication::translate("electricity", "Xu\341\272\245t h\303\263a \304\221\306\241n ", nullptr));
        btnremove->setText(QCoreApplication::translate("electricity", "-", nullptr));
        btnadd->setText(QCoreApplication::translate("electricity", "+", nullptr));
        btncheck->setText(QCoreApplication::translate("electricity", "Ki\341\273\203m tra", nullptr));
        logo->setText(QString());
        background->setText(QString());
        btnthoat->setText(QCoreApplication::translate("electricity", "Tho\303\241t", nullptr));
        label->setText(QCoreApplication::translate("electricity", "*Note : \341\272\245n v\303\240o t\303\252n ng\306\260\341\273\235i d\303\271ng 2 l\341\272\247n \304\221\341\273\203 s\341\273\255a th\303\264ng tin kh\303\241ch h\303\240ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class electricity: public Ui_electricity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTRICITY_H
