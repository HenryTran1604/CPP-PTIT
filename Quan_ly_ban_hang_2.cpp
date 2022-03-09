#include <bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
KhachHang *kh[105];
MatHang *mh[105];
string TaoMa(string s, int n)
{
	string res = "";
	res = s + string(3 - to_string(n).length(), '0') + to_string(n);
	return res;
}
class KhachHang{
	private:
		string MaKH, TenKH, GioiTinh, NgaySinh, DiaChi;
		static int dem1;
	public:
	friend istream &operator >> (istream &in, KhachHang& a)
	{
		a.dem1++;
		a.MaKH = TaoMa("KH", a.dem1);
		if(a.dem1 == 1)
			in.ignore();
		getline(in, a.TenKH);
		getline(in, a.GioiTinh);
		getline(in, a.NgaySinh);
		getline(in, a.DiaChi);
		kh[dem1] = &a;
		return in;
	}
	friend ostream& operator << (ostream &out, KhachHang a)
	{
		out << a.TenKH << " " << a.DiaChi << " ";
		return out;
	}
};
int KhachHang::dem1 = 0;
class MatHang{
	private:
		string MaMH, TenMH, DonVi;
		int GiaMua, GiaBan;
		static int dem2;
	public:
	friend istream& operator >> (istream &in, MatHang &a)
	{
		a.dem2++;
		a.MaMH = TaoMa("MH", a.dem2);
		in.ignore();
		getline(in, a.TenMH);
		getline(in, a.DonVi);
		in >> a.GiaMua >> a.GiaBan;
		mh[dem2] = &a;
		return in;
	}
	friend ostream& operator << (ostream& out, MatHang a)
	{
		out << a.TenMH << " ";
		return out;
	}
	int TongTienMua(int SoLuong)
	{
		return this->GiaMua*SoLuong;
	}
	int TongTienBan(int SoLuong)
	{
		return this->GiaBan*SoLuong;
	}
};
int MatHang::dem2 = 0;
class HoaDon{
	public:
		string MaHD, makh, mamh;
		static int dem3;
		int SoLuong, LoiNhuan, ThanhTien, x, y;
	friend istream& operator>>(istream& in, HoaDon &a)
	{
		a.dem3++;
		a.MaHD = TaoMa("HD", a.dem3);
		in >> a.makh >> a.mamh >> a.SoLuong;
		a.x = stoi(a.makh.substr(2));
		a.y = stoi(a.mamh.substr(2));
		a.ThanhTien = mh[a.y]->TongTienBan(a.SoLuong);
		a.LoiNhuan = a.ThanhTien - mh[a.y]->TongTienMua(a.SoLuong);
		return in;
	}
	friend ostream& operator << (ostream& out, HoaDon a)
	{
		out << a.MaHD << " ";
		out << *kh[a.x];
		out << *mh[a.y];
		out << a.SoLuong << " " << a.ThanhTien << " " << a.LoiNhuan << endl;
		return out;
	}
};
int HoaDon::dem3 = 0;
bool cmp(HoaDon a, HoaDon b)
{
	if(a.LoiNhuan == b.LoiNhuan)
		return a.MaHD < b.MaHD;
	return a.LoiNhuan > b.LoiNhuan;
}
void sapxep(HoaDon ds[], int n)
{
	sort(ds, ds+n, cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

