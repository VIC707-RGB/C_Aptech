#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main1(int argc, char *argv[]) {
	printf("Hello, World! \n\n");
	
	int n1, n2;
	printf("Nhap so nguyen 1: ");
	scanf("%d", &n1);
	printf("Nhap so nguyen 2: ");
	scanf("%d", &n2);
	
	int tong = n1 + n2;
	
	printf("Tong cua 2 so nguyen la: %d", tong);
	return 0;
}
