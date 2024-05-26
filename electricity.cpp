#include "electricity.h"
#include "./ui_electricity.h"
#include "khachhang.h"
#include "khachhangdialog.h"
#include "hoadondialog.h"
#include "checkthongtindialog.h"


//#include <QListWidgetItem>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>
#include <QFile>
#include <QTextStream>


electricity::electricity(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::electricity)
{
    ui->setupUi(this);

    setWindowTitle("Thu Tiền Điện");
    kh_KhachHangdialog = new KhachHangDialog;
    kh_HoaDondialog = new HoaDonDialog;
    kh_CheckDialog = new CheckThongTinDialog;

    //lấy dữ liệu từ file
    QFile file("datauser.txt");
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        while (!stream.atEnd()) {
            QString line = stream.readLine();
            QStringList data = line.split(",");
            if (data.size() == 6) {
                QString name = data[0];
                QString diachi = data[1];
                QString sdt = data[2];
                QString email = data[3];
                QString sodien = data[4];
                QString ngaysinh = data[5];
                KhachHang* khachhang = new KhachHang(name, diachi, sdt, email, sodien, ngaysinh);
                AddKhachHang(khachhang);
            }
        }
        file.close();
    }

}

// dùng để thêm khách hàng khi ấn dấu +
void electricity::AddKhachHang(KhachHang *khachhang)
{
    ui->bangkhachhang->addItem((QListWidgetItem*) khachhang);
    kh_KhachHang.push_back(khachhang);
}


void electricity::AddKhachHang(QString name)
{

    KhachHang* khachhang = new KhachHang(name);
    AddKhachHang(khachhang);
}


void electricity::AddKhachHang(QString name, QString diachi, QString sdt , QString email, QString sodien, QString ngaysinh)
{
    KhachHang* khachhang = new KhachHang(name , diachi , sdt, email, sodien, ngaysinh);
    AddKhachHang(khachhang);

}

// xóa khách hàng khi ấn dấu trừ
void electricity::RemoveKhachHang(KhachHang *khachhang )
{
    ui->bangkhachhang->removeItemWidget((QListWidgetItem*) khachhang);

    for (int i = 0; i < kh_KhachHang.size(); i++ )
    {
        if(kh_KhachHang[i] == khachhang) {


            kh_KhachHang.remove(i);
            delete khachhang;

        }

    }

}

// khi ấn 2 lần vào tên của khách hàng trong bảng sẽ hiện lên thông tin
void electricity::on_bangkhachhang_itemDoubleClicked(QListWidgetItem *item)
{
    kh_KhachHangdialog->Show((KhachHang*) item);
    qDebug() << "nguoi dung sua doi khach hang";
}



// nút thêm khách hàng mới
void electricity::on_btnadd_clicked()
{
    AddKhachHang("Khách Hàng mới");
    qDebug() << "nguoi dung an them khach hang moi";
}

// nút xóa khách hàng
void electricity::on_btnremove_clicked()
{
    RemoveKhachHang((KhachHang*) ui ->bangkhachhang->currentItem());
    qDebug() << "nguoi dung da xoa khach hang";
}


//hàm đó hiện thông báo khi đóng cửa sổ
void electricity::on_btnthoat_clicked()
{
    if(QMessageBox::question(this , "xác nhận", "bạn có chắc chắn muốn thoát không ?") == QMessageBox::Yes) {
        //đóng tất cả các tab
        electricity::CloseTab();
        close();
    }
    else {

        return;
    }
    qDebug() << "nguoi dung dong chuong trinh";
}

//hàm đó hiện thông báo khi đóng cửa sổ
void electricity::closeEvent(QCloseEvent* event)

{
    // lưu vào file khi thoát ra
    QFile file("datauser.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&file);
        for (KhachHang *khachhang : kh_KhachHang)
        {
            stream << khachhang->GetName() << ","
                   << khachhang->GetDiaChi() << ","
                   << khachhang->GetSdt() << ","
                   << khachhang->GetEmail() << ","
                   << khachhang->GetSoDien() << ","
                   << khachhang->GetNgaySinh() << "\n";
        }
        file.close();
    }

    if(QMessageBox::question(this , "xác nhận", "bạn có chắc chắn muốn thoát không ?") == QMessageBox::No)
    {

        event->ignore();
    }
    // đóng tất cả các tab
    electricity::CloseTab();

    qDebug() << "nguoi dung dong chuong trinh";

}



// hàm để click vào list
void electricity::on_bangkhachhang_itemClicked(QListWidgetItem *item)
{

}


//hàm hiện thông báo khi chọn
void electricity::on_btnhoadon_clicked()
{
    QListWidgetItem* item = ui->bangkhachhang->currentItem();
    if (item)
    {
        kh_HoaDondialog->Show((KhachHang*) item);
    }
    else
    {
        QMessageBox::warning(this, "Thông báo", "Hãy chọn một khách hàng từ bảng");
    }
   qDebug() << "nguoi dung an vao xem hoa don";
}





// xóa đi dữ liệu khách hàng
electricity::~electricity()
{
    for (int i = 0; i < kh_KhachHang.size(); i++ )
    {
        RemoveKhachHang(kh_KhachHang[i]);
    }

    delete ui;
    delete kh_KhachHangdialog;
    delete kh_HoaDondialog;
    delete kh_CheckDialog;
}



void electricity::on_btncheck_clicked()
{
    QListWidgetItem* item = ui->bangkhachhang->currentItem();
    if (item)
    {
        kh_CheckDialog->Show((KhachHang*) item);
    }
    else
    {
        QMessageBox::warning(this, "Thông báo", "Hãy chọn một khách hàng từ bảng");
    }

    qDebug() << "nguoi dung an kiem tra thong tin";
}

// đóng tất cả các tab
void electricity::CloseTab()
{
    kh_KhachHangdialog->close();
    kh_HoaDondialog->close();
    kh_CheckDialog->close();
}
