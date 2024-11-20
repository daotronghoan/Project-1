#include<bits/stdc++.h>
using namespace std;
class NCC
{
	friend class Phieu;
	private:
		char MaNCC[10], TenNCC[20], DiaChi[30];
		int SDT;
	public:
		void nhap();
		void xuat();		
};

void NCC::nhap()
{
	cout<<"Nhap ma NCC: ";fflush(stdin);gets(MaNCC);
	cout<<"Nhap ten NCC: ";fflush(stdin);gets(TenNCC);
	cout<<"Nhap dia chi: ";fflush(stdin);gets(DiaChi);
	cout<<"Nhap so dien thoai: ";cin>>SDT;
}
void NCC::xuat()
{
	cout<<left<<setw(20)<<"Ma nha cung cap: "<<setw(10)<<MaNCC<<"Ten nha cung cap: "<<TenNCC<<endl;
	cout<<left<<setw(20)<<"Dia chi: "<<setw(10)<<DiaChi<<"SDT: "<<SDT<<endl;
}
class SanPham
{
	friend class Phieu;
	private:
		char MaSP[5], TenSP[20];
		int SL,DG;
	public: 
		void nhap();
		void xuat();
};
void SanPham::nhap()
{
	cout<<"Nhap ma san pham: ";fflush(stdin);gets(MaSP);
	cout<<"Nhap ten san pham: ";fflush(stdin);gets(TenSP);
	cout<<"Nhap so luong: ";cin>>SL;
	cout<<"Nhap don gia: ";cin>>DG;
}
void SanPham::xuat()
{
	cout<<left<<setw(10)<<MaSP<<setw(15)<<left<<TenSP<<setw(10)<<SL<<setw(10)<<DG;
}
class Phieu
{
	private:
		NCC x;
		SanPham *y;
		char MaPhieu[10], NgayLap[20];
		int n;
		int d=0;
		int g=0,h=0;
		int b=0,c=0;	
	public:
		void nhap();
		void xuat();
};
void Phieu::nhap()
{
	y = new SanPham[n];
	cout<<"Nhap so luong n: ";cin>>n;
	cout<<"Nhap ma phieu: ";fflush(stdin);gets(MaPhieu);
	cout<<"Nhap ngay lap: ";fflush(stdin);gets(NgayLap);
	x.nhap();
	for(int i=0;i<n;i++)
	{
		cout<<"============================="<<endl;
		cout<<"Nhap san pham thu "<<i+1<<endl;
		y[i].nhap();
	};
}
void Phieu::xuat()
{
	cout<<"Dai hoc Victory"<<endl;
	cout<<"          PHIEU NHAP VAN PHONG PHAM       "<<endl;
	cout<<left<<setw(20)<<"Ma Phieu: "<<setw(10)<<MaPhieu<<"Ngay lap:  "<<NgayLap<<endl;
	x.xuat();
	cout<<left<<setw(10)<<"Ma SP"<<setw(15)<<left<<"TenSP"<<setw(10)<<"SL"<<setw(10)<<"DG"<<"Thanh Tien: "<<endl;
	for(int i=0;i<n;i++)
	{
		y[i].xuat();
		cout<<y[i].SL*y[i].DG<<endl;
	};
	for(int i=0;i<=n;i++)
	{
		b = y[i].SL*y[i].DG ;
		g = b + g;
	};
	cout<<right<<setw(20)<<"Tong"<<setw(30)<<g<<endl;
	cout<<right<<setw(15)<<"Hieu Truong"<<setw(30)<<"Phong tai chinh"<<setw(20)<<"Nguoi lap"<<endl;
		
	for(int i=0;i<n;i++)
	{
		if(y[i].SL<80)
		{
			d++;
		}	
	}
	cout<<"Co "<<d<<" san pham co so luong nho hon 80"<<endl;
	int m;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(y[i].DG>y[j].DG)
				{
					m = y[i].DG;
					y[i].DG = y[j].DG;
					y[j].DG = m;
				}
		}
	}
	cout<<endl;
	cout<<"=========================================================================="<<endl;
	cout<<"         Mang sau khi da sap xep"<<endl;
	cout<<"Dai hoc Victory"<<endl;
	cout<<"          PHIEU NHAP VAN PHONG PHAM       "<<endl;
	cout<<left<<setw(20)<<"Ma Phieu: "<<setw(10)<<MaPhieu<<"Ngay lap:  "<<NgayLap<<endl;
	x.xuat();
	cout<<left<<setw(10)<<"Ma SP"<<setw(15)<<left<<"TenSP"<<setw(10)<<"SL"<<setw(10)<<"DG"<<"Thanh Tien: "<<endl;
		for(int i=0;i<n;i++)
	{
		y[i].xuat();
		cout<<y[i].SL*y[i].DG<<endl;
	};
		for(int i=0;i<=n;i++)
	{
		c = y[i].SL*y[i].DG ;
		h = c + h;
	};
	cout<<right<<setw(20)<<"Tong"<<setw(30)<<g<<endl;
	cout<<left<<setw(20)<<"Hieu Truong"<<setw(30)<<"Phong tai chinh"<<setw(20)<<"Nguoi lap"<<endl;
}

int main()
{
	int n;
	Phieu a;
	a.nhap();
	a.xuat();
}
	




