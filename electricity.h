#ifndef ELECTRICITY_H
#define ELECTRICITY_H

#include <QMainWindow>
#include "hoadondialog.h"
#include "khachhang.h"
#include "checkthongtindialog.h"
#include <QString>
#include <QVector>




QT_BEGIN_NAMESPACE
namespace Ui {
class electricity;
}
QT_END_NAMESPACE

//class KhachHang;
class QListWidgetItem;
class KhachHangDialog;
class HoaDonDialog;
class CheckThongTinDialog;

class electricity : public QMainWindow
{
    Q_OBJECT

public:
    electricity(QWidget *parent = nullptr);
    ~electricity();

    //hàm để thêm khách hàng
    void AddKhachHang (KhachHang* khachhang);
    void AddKhachHang (QString name) ;
    void AddKhachHang (QString name, QString diachi, QString sdt, QString email,QString sodien, QString ngaysinh);

    void RemoveKhachHang (KhachHang* khachhang );

    //khai báo nút bấm
private slots:
    void on_bangkhachhang_itemDoubleClicked(QListWidgetItem *item);


    void on_btnadd_clicked();


    void on_btnremove_clicked();


    void on_btnthoat_clicked();


    void on_btnhoadon_clicked();


    void on_bangkhachhang_itemClicked(QListWidgetItem *item);

    void on_btncheck_clicked();


protected:
    void closeEvent (QCloseEvent * event);

    void CloseTab ();

private:
    Ui::electricity *ui;

    //tạo mảng vector để trỏ tới từng đối tượng khách hàng
    QVector<KhachHang*> kh_KhachHang;

    KhachHangDialog* kh_KhachHangdialog;

    HoaDonDialog* kh_HoaDondialog;

    CheckThongTinDialog* kh_CheckDialog;
};
#endif // ELECTRICITY_H
