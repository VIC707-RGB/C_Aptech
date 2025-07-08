#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	baitap();
	return 0;
}

void baitap(){
	int a;
	printf("Nhap o day: ");
	scanf("%d", &a);
//	printf("a = %d", a);
	if(a >= 5){
		printf("ket qua!");
	}
}

void tinhTong(){
	int a; int b;
	a = 10; b = 12;
	printf("Ket qua: %d", a + b);
	a=17;
	printf("\nKet qua: %d", a + b);
	a++;
	printf("\n a = %d", a);
	a-=10;
	if(a != 0){
		printf("\n a = %d", a);
	}
	
}

void sayHi(){
	printf("\nHi");
}
