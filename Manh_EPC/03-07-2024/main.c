#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	example();
//	printf("Hello!");

	variables();
	return 0;
}

void operators(){
	
}

void variables(){ //void: hat rong, khong tra ve, khong chua gia tri
	int numberOfApples = 10; //n la ten rut gon cho 1 o bo nho co kich co int
	int b; int a;
	
	int n = 10; //int: bien so nguyen, 4 bytes
	float f = 10.7; //float: bien so thap phan, 8 bytes
	char ch = 'c'; //char: bien ki tu, 1 byte
	double d = 10.7873; //double: bien so thap phan, 16 bytes
	
//	b = n = numberOfApples;
	
//	printf("a: %d", a);
	
	printf("Enter number a:");
	scanf("%d", &a);
	printf("Enter number b:");
	scanf("%d", &b);
	int c = a * (b + n) - n; //+ - * /
	c--; //++ --
	printf("c: %d", c);
}

int example(){
	printf("Hello 2!");
}
