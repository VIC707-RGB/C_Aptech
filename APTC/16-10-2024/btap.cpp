#include <time.h>
#include <iostream>
#include <cstdlib>

using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		std::cout <<"\nNhap phan tu thu "<< i <<": ";
		std::cin >>a[i];
	}
}
void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
		a[i]=rand()%100 - rand()%100;
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		std::cout<< a[i] <<"\t";
}

int TongPTChan(int a[], int n)
{
	int i, tong=0, flag=0;
	for(i=0; i<n; i++)
		if(a[i]%2==0)
		{
			flag=1;
			tong = tong + a[i];
		}
		if(flag==1)
			return tong;
		return -1;		
}

int main()
{
	
	int a[23], i, n, kq;
	std::cout<<"Nhap so luong phan tu thuc: "; cin>>n;
	MangNgauNhien(a,n);
	XuatMang(a,n);
	kq=TongPTChan(a,n);
	std::cout<<"\nTong cac phan tu chan co trong mang la: "<< kq;
	std::cout<<endl;
	
	return 0;
}
