#ifndef HOADONDIALOG_H
#define HOADONDIALOG_H

#include <QDialog>
#include "khachhang.h"

namespace Ui {
class HoaDonDialog;
}

class KhachHang;

class HoaDonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HoaDonDialog(QWidget *parent = nullptr);
    ~HoaDonDialog();

    void Show(KhachHang* khachhang);

private slots:
    void ngayhomnay();


private:
    Ui::HoaDonDialog *ui;

    KhachHang* kh_KhachHang;
};

#endif // HOADONDIALOG_H
