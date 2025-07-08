#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

int main(int argc, char *argv[]) {
	variablesAndOperatorsBasic();
	return 0;
}

void variablesAndOperatorsBasic(){ //void: khong chua gia tri, hat rong
	int numberOfStudents = 7; // n tuong ung vs 1 o bo nho tren may tinh
	numberOfStudents++;
	
	int l,o,i; //khai bao nhieu bien
	l = o = i = 10; //gan gia tri cho nhieu bien
	printf("So nguyen o: %d \n", o);
	
	//vong dieu kien
//	if(!l) : xet l co ton tai gia tri khong
	if(l == i || l != 10){
		printf("true\n");
	}else{
		printf("false\n");
	}	
	float u = (float) l;
	
	int m = (numberOfStudents + 10) % 6; //int: chua so nguyen, 4 byte/ 1 o
	printf("So nguyen: %d \n", m);
	float f = 3.765432; //float: chua so thuc, 8 byte/ 1 o, max 6 so thap phan
	printf("So thuc: %f \n", f);
	double d = 3.765432; //double: chua so thuc, 16 byte/ 1 o, max 12 so thap phan
	printf("So thuc: %.9lf \n", d);
	char c = 'k'; //double: chua so thuc, 16 byte/ 1 o, max 12 so thap phan
	printf("Ki tu: %c \n", c); //char: chua 1 ki tu, 1 byte/ 1 o
}
