#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1, b=1;
	int x=(a++);
	printf("x: %d", x);
	int y=(a--);
	printf("y: %d", y);
	return 0;
}

void loop(){
	int x = 0;
	int y;
//	for(x = 0, y = 10; x < y; x++, y--){
//		printf("x: %d; y: %d\n", x, y);
//	}
	
//	for(x = 0; x < 10; x++){
//		printf("x: %d\n", x);
//		for(y = 0; y < 10; y++){
//			printf("\ty: %d\n", y);
//		}
//	}
	y=0;
	while(y == 0){
		y++;
		printf("unending\n");
	}
	
	do{
		printf("unending\n");
	}while(y != 0);
	
}

void condition(){
	int x, y;
	char a = 'y';
	x = y = 0;
	
	if (a == 'y')
	{
		x += 5;
		printf("The numbers are %d and %d\n", x, y);
		if (x != 0){
			x += 10;
			printf("The numbers are %d and %d\n", x, y);
		}
	}
	
//	else{
//		printf("The numbers are %d and \t%d", x, y);
//	}

	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("yes");
			break;
		case 2:
			printf("no");
			break;
		default:
			printf("default");
			break;
	}
}
