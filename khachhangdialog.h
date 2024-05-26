 #ifndef KHACHHANGDIALOG_H
#define KHACHHANGDIALOG_H

#include "khachhang.h"
#include <QDialog>

namespace Ui {
class KhachHangDialog;
}

class KhachHang;

class KhachHangDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KhachHangDialog(QWidget *parent = nullptr);
    ~KhachHangDialog();

    void Show(KhachHang* khachhang);

private slots:
    void on_btnxacnhan_released();


    void on_btnhuy_released();

private:
    Ui::KhachHangDialog *ui;

    KhachHang* kh_KhachHang;
};

#endif // KHACHHANGDIALOG_H
