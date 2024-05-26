#include "khachhang.h"



// hàm trống
KhachHang::KhachHang(QString name)
    : QListWidgetItem(name)
{

}

// dữ liệu của khách hàng
KhachHang::KhachHang(QString name, QString diachi, QString sdt, QString email, QString sodien, QString ngaysinh)
    :QListWidgetItem(name),
    kh_DiaChi(diachi),
    kh_sdt(sdt),
    kh_email(email),
    kh_sodien(sodien),
    kh_ngaysinh( ngaysinh),
    tiendien(0),
    tienthue(0),
    tong(0)
{
}

// xóa con trỏ của khách hàng
KhachHang::~ KhachHang()
{

}

// hàm tính tiền điện
void KhachHang::tinhTienDien() {
    int soDien = kh_sodien.toInt();

    if (soDien <= 52) {
        this->tiendien = soDien* 1806;
    }
    else if ( soDien <= 104 && soDien > 52 ) {
        this->tiendien = 52 * 1806 + (soDien - 52)*1866;
    }
    else if (soDien <= 207 && soDien > 104) {
        this->tiendien = 52* 1806 + 52 * 1866 + (soDien - 104) * 2167;
    }
    else if (soDien <= 310 && soDien > 207) {
        this-> tiendien = 52* 1806 + 52 * 1866 + 103 * 2167 + (soDien - 207) * 2729;
    }
    else if (soDien <= 413 && soDien > 310 ) {
        this-> tiendien = 52* 1806 + 52 * 1866 + 103 * 2167 + 103 *2729 + (soDien - 310) * 3050;
    }
    else
    {
        this-> tiendien = 52* 1806 + 52 * 1866 + 103 * 2167 + 103 * 2729 + 3050 * 103 +(soDien - 413) * 3151;
    }
}

