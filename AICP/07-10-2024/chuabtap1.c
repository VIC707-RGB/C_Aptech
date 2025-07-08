#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 1;
//	do{
//		printf("Nhap i: ");
//		scanf("%d", &i);
//		printf("i = 0\n");
//	}while(i == 0);
	
//	float n1, n2;
//	printf("Nhap so thuc 1: ");
//	scanf("%f", &n1);
//	printf("Nhap so thuc 2: ");
//	scanf("%f", &n2);
//	
//	printf("n1 = %.2f, n2 = %.2f", n1, n2);

	char chuoi[24];
	printf("Nhap chuoi: ");
	gets(chuoi);
	
	for(i = 0; i < 24; i++){
		if(chuoi[i] != ' '){
			printf("%c", chuoi[i]);
		}
	}
	return 0;
}
