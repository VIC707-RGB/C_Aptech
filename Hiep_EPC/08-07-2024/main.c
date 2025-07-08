#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bai2();
	return 0;
}

void bai2(){
	float a,b,c;
	printf("So thuc 1:");
	scanf("%f", &a);
	printf("So thuc 2:");
	scanf("%f", &b);
	printf("So thuc 3:");
	scanf("%f", &c);
	
	float dientich = a*a*3.14;
	float chuvi = a*2*3.14;
	printf("Dien tich: %f\n", dientich);
	printf("Chu vi: %f", chuvi);
}

void conditional(){
	int diem; char name;
	printf("Nhap diem cua ban: ");
	scanf("%d", &diem);
	printf("Nhap ten cua ban: ");
	fflush(stdin);
	name = getchar();
	fflush(stdout);
	
	//if
	if(diem >= 100){ //cu phap: if(bieu thuc){//toan bo code neu bieu thuc dung}
		printf("Excellent!");
		if(name == 'c'){
			printf("\n Hello c!");
		}
	}
	else if(diem < 100 && diem >= 80){
		printf("Good!");
	}
	else if(diem < 80 && diem >= 60){
		printf("Ok!");
	}
	else if(diem < 60 && diem >= 40){
		printf("Pass!");
	}
	else{
		printf("Try harder!");
	}
}
