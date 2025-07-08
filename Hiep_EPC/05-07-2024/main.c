#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	io();
	return 0;
}

void io(){
	int n = 10;
	float f = 3.15;
	char c = 'd';
	char name[23]; //yeu cau phai hoc ve mang
	
	//xuat
	printf("Hello! \\\\ Number: %d \n", 777);
	printf("Hello! Number: %.2f \n", f);
	
	//nhap
	printf("Nhap so thap phan:");
//	scanf("%f", &f); //
	printf("Hello! \\\\ Number: %d \n", n);
	printf("Hello! Number: %.2f \n", f);
	
	//getchar & putchar
	printf("Nhap chu:");
	gets(name);
	puts(name);
}
