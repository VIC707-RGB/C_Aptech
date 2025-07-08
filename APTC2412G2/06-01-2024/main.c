#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//mang va gia tri i duoc nhap tu ban phim
	
	//MANG-----------------------------------
	//-> so index: int n
	int n;
	//-> nhap vao so phan tu
	printf("Nhap index: ");
	scanf("%d", &n);
	//-> khai bao mang ten arr
	int arr[n]; 
	//-> nhap vao du lieu cho mang arr
	int y;
	for(y = 0; y < n; y++){
		printf("Nhap phan tu thu %d: ", y);
		scanf("%d", &arr[y]);
	}
	
	//vi tri thu i--------------------------------
	//-> khai bao int i
	int i;
	//-> nhap vao vi tri thu i
	printf("Nhap index: ");
	scanf("%d", &i);
	
	deleteElement(arr, i, &n);
	//in ket qua
	for(y = 0; y < n; y++){
		printf("arr[%d]: %d", y, arr[y]);
	}
	return 0;
}

//Vi?t hàm deleteElement s? d?ng ki?u tr? v? void d? 
//xoá ph?n t? ? v? trí th? i (do ngu?i dùng nh?p) trong m?ng arr

//-> khai bao mang + kieu du lieu tra ve
void deleteElement(int arr[], int i, int *n){ 
	//-> dua du lieu vao trong ham de xu li (khai bao tham so trong ham + goi ham trong main)
	//PHAN TICH: XOA PHAN TU O VI TRI THU i
	//1. tim den ptu vi tri thu i
	int j;
	for(j = 0; j < *n - 1; j++){
		//2. xoa gia tri vi tri thu i
		if(i <= j){
			//3. don gia tri vao vi tri thu i tro di
			arr[j] = arr[j + 1];
		}
	}
	//4. xoa phan tu bi bo trong (ptu cuoi)
}
