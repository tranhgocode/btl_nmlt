#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <QString>
#include <QListWidgetItem>

// tạo tệp khách hàng cho cái bảng hiển thị
class KhachHang : public QListWidgetItem
{
public:
    KhachHang() { }
    KhachHang(QString name);
    KhachHang(QString name, QString diachi, QString std, QString email, QString sodien, QString ngaysinh);
    ~KhachHang();
//gọi hàm để đặt dữ liệu khách hàng
    void SetName(QString name);
    void SetDiaChi(QString diachi);
    void SetSdt(QString sdt);
    void SetEmail(QString email);
    void SetSoDien(QString sodien);
    void SetNgaySinh(QString ngaysinh);
    void tinhTienDien();


// hàm để lấy dữ liệu và xuát lên màn hình
    QString GetName() const;
    QString GetDiaChi() const;
    QString GetSdt() const;
    QString GetEmail() const;
    QString GetSoDien() const;
    QString GetNgaySinh() const;
    int GetTienDien();
    int GetTienThue();
    int GetTong();

private:

    //dữ liêu của người dùng
    QString kh_DiaChi;
    QString kh_sdt;
    QString kh_email;
    QString kh_sodien;
    QString kh_ngaysinh;
    int tiendien;
    int tienthue;
    int tong;
};
// lấy dữ liệu tên
inline void KhachHang::SetName(QString name)
{
    QListWidgetItem::setText(name);
}

// lấy dữ liệu địa chỉ
inline void KhachHang::SetDiaChi(QString diachi)
{
    kh_DiaChi = diachi;
}

// lấy dữ liệu số điện thoại
inline void KhachHang::SetSdt(QString sdt)
{
    kh_sdt = sdt;
}

inline void KhachHang::SetEmail(QString email)
{
    kh_email = email;
}

inline void KhachHang::SetSoDien(QString sodien)
{
    kh_sodien = sodien;
}

inline void KhachHang::SetNgaySinh(QString ngaysinh)
{
    kh_ngaysinh = ngaysinh;
}
/*
inline void KhachHang::tinhTien() {
    int soDien = kh_sodien.toInt();

    if (soDien <= 52) {
        this->tongtien = soDien* 1806;
    }
    else if ( soDien <= 104 && soDien > 52 ) {
        this->tongtien = 52 * 1806 + (soDien - 52)*1866;
    }
    else if (soDien <= 207 && soDien > 104) {
       this->tongtien = 52* 1806 + 52 * 1866 + (soDien - 104) * 2167;
    }
    else if (soDien <= 310 && soDien > 207) {
       this-> tongtien = 52* 1806 + 52 * 1866 + 103 * 2167 + (soDien - 207) * 2729;
    }
    else if (soDien <= 413 && soDien > 310 ) {
       this-> tongtien = 52* 1806 + 52 * 1866 + 103 * 2167 + 103 *2729 + (soDien - 310) * 3050;
    }
    else
    {
       this-> tongtien = 52* 1806 + 52 * 1866 + 103 * 2167 + 103 * 2729 + 3050 * 103 +(soDien - 413) * 3151;
    }
}

*/

// hiểu thị dữ liệu lên màn hình
inline QString KhachHang::GetName() const
{
    return QListWidgetItem::text();
}

// trả về địa chỉ
inline QString KhachHang::GetDiaChi() const
{
    return kh_DiaChi;
}

//trả về số điện thoại
inline QString KhachHang::GetSdt() const
{
    return kh_sdt;
}

// trả về email
inline QString KhachHang::GetEmail() const
{
    return kh_email;
}

// trả về số điện
inline QString KhachHang::GetSoDien() const
{
    return kh_sodien;
}

// trả về ngày sinh
inline QString KhachHang::GetNgaySinh() const
{
    return kh_ngaysinh;
}

inline int KhachHang::GetTienDien()
{
    KhachHang::tinhTienDien();
    return tiendien;
}

inline int KhachHang::GetTienThue()
{
    return tienthue = tiendien*0.08;
}

inline int KhachHang::GetTong()
{
    return tong = tienthue + tiendien;
}


#endif // KHACHHANG_H
