#include "hoadondialog.h"
#include "ui_hoadondialog.h"
#include "khachhang.h"
#include <QTimer>
#include <QDate>
#include <QString>
#include <QDebug>


QTimer timer;

HoaDonDialog::HoaDonDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HoaDonDialog)
{
    ui->setupUi(this);

    setWindowTitle("Hóa Đơn");

    connect(&timer, SIGNAL(timeout()), this, SLOT(ngayhomnay())); // thời gian thực
    timer.start();
}

// hàm hiện ở màn hình xuất hóa đơn
void HoaDonDialog::Show(KhachHang* khachhang)
{
    ui->lbten->setText("Khách Hàng : "+ khachhang -> GetName());
    ui->lbsdt->setText( "Số Điện Thoại : " + khachhang-> GetSdt());
    ui->lbdiachi->setText("Địa Chỉ : " + khachhang-> GetDiaChi());
    ui->lbemail->setText("Email : " + khachhang-> GetEmail());
    ui->lbngaysinh->setText("Ngày Sinh :  " + khachhang->GetNgaySinh());
    ui->lbsodien->setText(QString("Điện Tiêu Thụ : %1 kWh").arg(khachhang -> GetSoDien()));

    int tong = khachhang->GetTienDien();
    ui->lbtiendien->setText(QString("  Tiền điện chưa thuế :\t\t\t\t\t               %1 ").arg(tong));

    int thue = khachhang -> GetTienThue();
    ui->lbthue->setText((QString("  Thuế GTGT (8%) tiền điện :\t\t\t\t\t  %1 ").arg(thue)));

    int tongtien = khachhang ->GetTong();
    ui->lbtong->setText((QString("  Tổng cộng tiền thanh toán (đồng) :\t\t\t\t  %1 ").arg(tongtien)));



    QString ssodien = khachhang->GetSoDien();
    int isoDien = ssodien.toInt();

    if (isoDien <= 52)
    {
        QString s = QString("   %1" ).arg(isoDien);
        ui->lbsotien_1->setText(s);
        ui->lbsotien_2->setText("   0");
        ui->lbsotien_3->setText("   0");
        ui->lbsotien_4->setText("   0");
        ui->lbsotien_5->setText("   0");
        ui->lbsotien_6->setText("   0");

        int bac1 = isoDien * 1806;
        QString s1 = QString ("%1").arg(bac1);
        ui->lbtongbac_1->setText(s1);
        ui->lbtongbac_2->setText("0");
        ui->lbtongbac_3->setText("0");
        ui->lbtongbac_4->setText("0");
        ui->lbtongbac_5->setText("0");
        ui->lbtongbac_6->setText("0");



    }

    else if (isoDien > 52 && isoDien <= 104)
    {
        QString s = QString("   %1" ).arg(isoDien - 52);
        ui->lbsotien_1->setText("   52");
        ui->lbsotien_2->setText(s);
        ui->lbsotien_3->setText("   0");
        ui->lbsotien_4->setText("   0");
        ui->lbsotien_5->setText("   0");
        ui->lbsotien_6->setText("   0");


        QString s1 = QString ("%1").arg(52 * 1806);
        QString s2 = QString ("%1").arg((isoDien - 52 ) * 1806);
        ui->lbtongbac_1->setText(s1);
        ui->lbtongbac_2->setText(s2);
        ui->lbtongbac_3->setText("0");
        ui->lbtongbac_4->setText("0");
        ui->lbtongbac_5->setText("0");
        ui->lbtongbac_6->setText("0");
    }

    else if (isoDien > 104 && isoDien <= 207)
    {
        QString s = QString("   %1" ).arg(isoDien - 104);
        ui->lbsotien_1->setText("   52");
        ui->lbsotien_2->setText("   52");
        ui->lbsotien_3->setText(s);
        ui->lbsotien_4->setText("   0");
        ui->lbsotien_5->setText("   0");
        ui->lbsotien_6->setText("   0");


        QString s1 = QString ("%1").arg(52 * 1806);
        QString s2 = QString ("%1").arg(52  * 1866);
        QString s3 = QString ("%1").arg((isoDien - 104 ) * 2167);
        ui->lbtongbac_1->setText(s1);
        ui->lbtongbac_2->setText(s2);
        ui->lbtongbac_3->setText(s3);
        ui->lbtongbac_4->setText("0");
        ui->lbtongbac_5->setText("0");
        ui->lbtongbac_6->setText("0");

    }

    else if (isoDien > 207 && isoDien <= 310)
    {
        QString s = QString("   %1" ).arg(isoDien - 207);
        ui->lbsotien_1->setText("   52");
        ui->lbsotien_2->setText("   52");
        ui->lbsotien_3->setText("   103");
        ui->lbsotien_4->setText(s);
        ui->lbsotien_5->setText("   0");
        ui->lbsotien_6->setText("   0");


        QString s1 = QString ("%1").arg(52 * 1806);
        QString s2 = QString ("%1").arg(52  * 1866);
        QString s3 = QString ("%1").arg(103 * 2167);
        QString s4 = QString ("%1").arg((isoDien - 207) * 2729);
        ui->lbtongbac_1->setText(s1);
        ui->lbtongbac_2->setText(s2);
        ui->lbtongbac_3->setText(s3);
        ui->lbtongbac_4->setText(s4);
        ui->lbtongbac_5->setText("0");
        ui->lbtongbac_6->setText("0");

    }

    else if (isoDien > 310 && isoDien <= 413)
    {
        QString s = QString("   %1" ).arg(isoDien - 310);
        ui->lbsotien_1->setText("   52");
        ui->lbsotien_2->setText("   52");
        ui->lbsotien_3->setText("   103");
        ui->lbsotien_4->setText("   103");
        ui->lbsotien_5->setText(s);
        ui->lbsotien_6->setText("   0");


        QString s1 = QString ("%1").arg(52 * 1806);
        QString s2 = QString ("%1").arg(52  * 1866);
        QString s3 = QString ("%1").arg(103 * 2167);
        QString s4 = QString ("%1").arg(103 * 2729);
        QString s5 = QString ("%1").arg((isoDien - 310) * 3050);
        ui->lbtongbac_1->setText(s1);
        ui->lbtongbac_2->setText(s2);
        ui->lbtongbac_3->setText(s3);
        ui->lbtongbac_4->setText(s4);
        ui->lbtongbac_5->setText(s5);
        ui->lbtongbac_6->setText("0");

    }

    else
    {
        QString s = QString("   %1" ).arg(isoDien - 413);
        ui->lbsotien_1->setText("   52");
        ui->lbsotien_2->setText("   52");
        ui->lbsotien_3->setText("   103");
        ui->lbsotien_4->setText("   103");
        ui->lbsotien_5->setText("   103");
        ui->lbsotien_6->setText(s);


        QString s1 = QString ("%1").arg(52 * 1806);
        QString s2 = QString ("%1").arg(52  * 1866);
        QString s3 = QString ("%1").arg(103 * 2167);
        QString s4 = QString ("%1").arg(103 * 2729);
        QString s5 = QString ("%1").arg(103 * 3050);
        QString s6 = QString ("%1").arg((isoDien - 413) * 3151);
        ui->lbtongbac_1->setText(s1);
        ui->lbtongbac_2->setText(s2);
        ui->lbtongbac_3->setText(s3);
        ui->lbtongbac_4->setText(s4);
        ui->lbtongbac_5->setText(s5);
        ui->lbtongbac_6->setText(s6);
    }



    kh_KhachHang = khachhang;

    show();

}
// hàm hiển thị thời gian và ngày tháng thực
void HoaDonDialog::ngayhomnay() {
    QDate today = QDate::currentDate();
    int year = today.year();
    int month = today.month();
    int day = today.day();



    QTime time = QTime::currentTime();
    int hour = time.hour();
    int minute = time.minute();
    int second = time.second();

    //hiển thị ngày
    QString ngay = QString("%1/%2/%3").arg(day, 2).arg(month, 2 ).arg(year, 4 );

    // hiển thị giờ
    QString gio = QString("%1:%2:%3").arg(hour, 2).arg(minute, 2).arg(second, 2);


    ui->lbngay->setText("Ngày :  " + ngay);
    ui->lbgio->setText( "Giờ :  "  +  gio);
}




HoaDonDialog::~HoaDonDialog()
{
    delete ui;
}
