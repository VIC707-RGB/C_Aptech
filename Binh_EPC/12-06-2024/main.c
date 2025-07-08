#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	condition();
	return 0;
}

void sayHello(){
	printf("My name is HHh. ");
	printf("hello!");
}

void operators(){
	//arthmetic
	int a, b;
	a = b = 10;
	int c = a % b;
	printf("%d", c);
}

void condition(){
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	if(a == b || a == 10){
		printf("a == b == 10");
	}
	if(a > b){
		printf("a > b");
	}
	if(a != b){
		printf("a != b");
	}
}

void IO(){
//	int n;
//	printf("Enter an integer: ");
//	scanf("%d", &n);
//	printf("Integer: %d", n);
	
	char c;
	printf("\nEnter a char: ");
	c = getchar();
	putchar(c);
}

void variables(){
	unsigned int num; //khai bao 1 bien chua gia tri so nguyen
	num = 1325;
	printf("%d", num);
	float f = 7.287136; //so thuc
	printf("\n%f", f);
	double d = 7.2871363432432423; //so thuc
//	printf("\n%ld", d);
	char c = 'c'; //so thuc
	printf("\n%c", c);
}
