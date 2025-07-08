#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	array();
	return 0;
}

void array(){
	int ary[3];
	int ary2[3];
	
	ary[0] = 29;
	ary[1] = 13;
	ary[2] = 20;
	ary2[0] = 0;
	ary2[1] = 0;
	ary2[2] = 0;
	
	int i;
	for(i = 0; i < 3; i++){
		printf("ary[%d] = %d\n",i, ary[i]);
	}
	printf("\n");
	for(i = 0; i < 3; i++){
		ary[i] = i;
		printf("ary[%d] = %d\n",i, ary[i]);
	}
} 

void bai1(){
	float kwh;
	do{
		printf("Nhap vao so kWh: ");
		scanf("%f", &kwh);
//		printf("%f", kwh);
	}while(kwh < 0);
	
	//kwh 300
	float money = 0;
	if(kwh >= 0 && kwh <= 50){
		money += kwh * 1678;
	}
	else if(kwh >= 51 && kwh <= 100){
		money += 50 * 1678 + (kwh - 50)*1734;
	}
	else if(kwh >= 101  && kwh <= 200 ){
		money += 50 * 1678 + 50 * 1734 + (kwh - 100)*2014;
	}
	else if(kwh >= 201  && kwh <= 300 ){
		money += 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200)*2536;
	}
	else if(kwh >= 301  && kwh <= 400 ){
		money += 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300)*2834;
	}
	else if(kwh >= 401){
		money += 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2536 + (kwh - 400)*2927;
	}
	else{
		printf("Nhap k dung");
	}
	
	printf("Tien ph tra: %.2f", money);
	
} 
