#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */
//hellooooooo

int main(int argc, char *argv[]) {
	
	int x; int y;
	printf("Enter x: ");
	scanf("%d", &x); 
	printf("Enter y: ");
	scanf("%d", &y);
	
	int tong = x + y;
//	int tru = x - y;
//	int nhan = x * y;
//	int chia = x / y;
	printf("Tong cua 2 so la: %d \n", tong);
//	hello();
	//khai bao 1 bien:
	//1. khai bao loai bien: int
	//2. khai bao ten bien
	//3. (tuy)gan gia tri
	
	int i = 10; //10 is a constant
	printf("int i = %d", i);
	//i chua gia tri so nguyen
	float f = 10.123223;
	printf("\nfloat f = %f", f);
	//f chua gia tri so thuc
	double d = 10.45214524;
	printf("\ndouble d = %f", d);
	//d chua gia tri so thuc
	char c = '?';
	printf("\nchar c = %c", c);
	//c chua gia tri 1 ki tu chu
	
	//nhap/xuat
	printf("\nEnter c: ");
	scanf("%c", &c);
	printf("char c = %c", c);
	printf("\nEnter i: ");
	scanf("%d", &i);
	printf("int i = %d", i);
	printf("\nEnter f: ");
	scanf("%f", &f);
	printf("float f = %f", f);
	printf("\nEnter d: ");
	scanf("%lf", &d);
	printf("double d = %lf", d);
	

//	printf("Enter 2 numbers: ");
//	
//	int A; int B;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	
//	int C = A + B;
//	
//	printf("%d", C);
	
	return 0;
}

//muc tieu: in hello ra man hinh
//b1: viet ham hello
//b2: viet cau lenh in
//b3: cho cau lenh do in ra hello
//b4: goi den ham hello() trong main()
//b5: chay ctrinh
//b6: in hello ra man hinh
void hello(){
	printf("hello");
}

void sayHello1(){
	printf("Hello");
}
void sayHello2(){
	printf("Hello");
}
