#ifndef CHECKTHONGTINDIALOG_H
#define CHECKTHONGTINDIALOG_H

#include <QDialog>
#include "khachhang.h"

namespace Ui {
class CheckThongTinDialog;
}

class KhachHang;

class CheckThongTinDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckThongTinDialog(QWidget *parent = nullptr);
    ~CheckThongTinDialog();

    void Show(KhachHang* khachhang);

private slots:


    void on_pushButton_clicked();

private:
    Ui::CheckThongTinDialog *ui;

    KhachHang* kh_KhachHang;
};

#endif // CHECKTHONGTINDIALOG_H
