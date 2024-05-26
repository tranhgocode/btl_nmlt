#include "khachhangdialog.h"
#include "ui_khachhangdialog.h"
#include "khachhang.h"
#include <QDateEdit>
#include <QDate>

KhachHangDialog::KhachHangDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::KhachHangDialog)
{
    ui->setupUi(this);

    setWindowTitle("Sửa Thông Tin Khách Hàng ");
}

// hàm hiện ở màn chỉnh sửa
void KhachHangDialog::Show(KhachHang* khachhang)
{
    ui->nhapten->setText(khachhang-> GetName());
    ui->nhapsdt->setText(khachhang-> GetSdt());
    ui->nhapdiachi->setText(khachhang-> GetDiaChi());
    ui->nhapemail->setText(khachhang-> GetEmail());
    ui->nhapsodien->setText(khachhang->GetSoDien());

    QDateEdit* EditDate = ui->dengaysinh;
    QString s = khachhang -> GetNgaySinh();
    QDate date = QDate::fromString(s, "dd/MM/yyyy");
    EditDate->setDate(date);

    kh_KhachHang = khachhang;
    show();

}

KhachHangDialog::~KhachHangDialog()
{
    delete ui;
}

// hàm xác nhận và lưu giá trị của khách hàng
void KhachHangDialog::on_btnxacnhan_released()
{
    kh_KhachHang->SetName(ui->nhapten->text());
    kh_KhachHang->SetDiaChi(ui->nhapdiachi->text());
    kh_KhachHang->SetSdt(ui->nhapsdt->text());
    kh_KhachHang->SetEmail(ui->nhapemail->text());
    kh_KhachHang->SetSoDien(ui->nhapsodien->text());

    QDateEdit* EditDate = ui->dengaysinh;
    QDate ngay = EditDate->date();
    QString s = ngay.toString("dd/MM/yyyy");
    kh_KhachHang->SetNgaySinh(s);

    close();
    qDebug() << "nguoi dung an xac nhan sua doi";
}

// hàm đóng của sổ
void KhachHangDialog::on_btnhuy_released()
{
    close();
    qDebug() << "nguoi dung an huy sua doi";
}


