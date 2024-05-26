#include "checkthongtindialog.h"
#include "ui_checkthongtindialog.h"
#include "khachhang.h"
#include <QDebug>

CheckThongTinDialog::CheckThongTinDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CheckThongTinDialog)
{
    ui->setupUi(this);

    setWindowTitle("Thông Tin Khách Hàng");
}

CheckThongTinDialog::~CheckThongTinDialog()
{
    delete ui;
}

void CheckThongTinDialog::Show(KhachHang* khachhang)
{

    ui->lbten->setText("Khách Hàng : \t\t"+ khachhang -> GetName());
    ui->lbsdt->setText( "Số Điện Thoại : \t\t" + khachhang-> GetSdt());
    ui->lbdiachi->setText("Địa Chỉ : \t\t\t" + khachhang-> GetDiaChi());
    ui->lbemail->setText("Email : \t\t\t" + khachhang-> GetEmail());
    ui->lbngaysinh->setText("Ngày Sinh :  \t\t" + khachhang->GetNgaySinh());

    kh_KhachHang = khachhang;
    show();
}

void CheckThongTinDialog::on_pushButton_clicked()
{
    close();

    qDebug() << "Nguoi dung da an xac nhan thong tin";
    return;
}

