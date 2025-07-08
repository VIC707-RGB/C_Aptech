#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	session3();
	return 0;
}

void session3(){
//	int so_hoc_sinh = 10;
//	float diem = 8.9;
//	char c1 = 'c';
//	double d=98347.83724;
//	
//	printf("so_hoc_sinh = %d %f \n", so_hoc_sinh, diem);
//	printf("diem = %f \n", diem);
//	printf("char = %c \n", c1);
//	printf("double = %lf \n", d);
//	
//	printf("%s\n", "hello");
//	
//	scanf("%d", &so_hoc_sinh);
//	printf("so_hoc_sinh = %d \n", so_hoc_sinh);
	
	//operators
	//arithmetic
	int a,b,c;
	a = b = c = 24;
	//Relational
	if(a+b+c >= 100){
		printf("%d > 100", a+b+c);
	}
	if(a+b+c <= 100){
		printf("%d < 100\n", a+b+c);
	}
	if(a+b+c == 72 || a+b+c != 72){
		printf("%d = 72", a+b+c);
	}
}

void session2(){
	unsigned int so_hoc_sinh = 10;
	float diem = 8.9;
	char c1 = 'c';
	//muc tieu: tinh tog 2 so dc nhap boi ng dung
	//b1: tao 2 so
	int a; int b;
	//b2: cho ng dung nhap
	//ki hieu trc
	printf("Nhap so 1:");
	scanf("%d", &a);
	printf("Nhap so 2:");
	scanf("%d", &b);
	//b3: tinh tong
	int c = a + b;
	printf("Tong: %d", c+a+b);
}

void session1(){
	/*jhjgjfjf
	dkjhacbasb*/
	//	printf("hello!");
//	printf("hello world!");
	
//	if(){
//		//....
//	}
//	int dowhile;
//	hamgido();
}

