#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int n = tryReturn();
//	printf("n: %d", n);

	loop();
	return 0;
}

int tryReturn(){
	int i;
	printf("Enter a number:");
	scanf("%d", &i);
	return i;
}

void loop(){
	//for
	int i, j; 
	
	for(i = 0; i <= 10; i++){
//		printf("i: %d\n", i);
//		condition();
	}
	
	for(i = 0 , j = 10; i <= j; i++, j--){
//		printf("i: %d\n", i);
//		printf("j: %d\n\n", j);
	}
	
	//nested-for	
	for(i = 0; i <= 10; i++){ //voi moi lan lap cua vong for cha
//		printf("i: %d\n\n", i);
		for(j = 10; j >= 0; j--){ //thi vong lap con phai lap het toan bo cac truong hop
//			printf("j: %d\n", j);
		}
//		printf("\n");
	}
	
	i = 0;
//	while(i != 0){
//		printf("overload");
//	}
	int n;
	do{
		printf("Enter a number:");
		scanf("%d", &n);
//		if(n == 10){
//			continue;
//			break;
//		}
		break;
	}while(n != 0);
	
	printf("Next loop");
	while(n != 0){
		printf("Enter a number:");
		scanf("%d", &n);
		if(n == 10){
			exit(0);
		}
	}
}

void condition(){
	int n;
	
	printf("Enter a number:");
	scanf("%d", &n);
	
//	if(n % 2 == 0){
//		printf("Even\n");
//	}else{
//		printf("Odd\n");
//	}
	
	//multi-if: tinh rieng cac dieu kien (bieu thuc)
	if(n > 0){
		printf("n > 0\n");
	}
	if(n > 1){
		printf("n > 1\n");
	}
	if(n > 2){
		printf("n > 2\n");
	}
	
	//if-else-if: xet cac dk tu tren xuong duoi, dk nao dung trc thi thuc hien lenh do & ngung xet
	if(n > 0){
		printf("n > 0\n");
	}
	else if(n > 1){
		printf("n > 1\n");
	}
	else if(n > 2){
		printf("n > 2\n");
	}else{
		printf("else\n");
		if(n > -3){
			printf("n < -1\n");
			if(n == -2){
				printf("n = -2\n");
			}
		}else{
			printf("something else\n");
		}
	}
	
	
}
