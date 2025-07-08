#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	conditions();
//	loops();
	loopWhileAndDoWhile();
	return 0;
}

void loopWhileAndDoWhile(){
	int i=10;
	while(i == 0){
		printf("This is while loop");
		printf("Hello \n");
		printf("Enter number:");
		scanf("%d", &i);
	}
	do{
		printf("This is do-while loop\n");
		printf("Hello \n");
		printf("Enter number:");
		scanf("%d", &i);
	}while(i == 10);
}

void loops(){
	int i;
//	for(i = 1; i <= 10; i+=2){
//		printf("%d\n\n", i);
//	}
	int y;
//	for(i = 100, y = 50; i-y>=0; i--, y++){
//		printf("%d and %d\n", i, y);
//	}
	for(i = 1; i <= 10; i+=2){
		printf("x = %d\n", i);
		for(y = 0; y <= 3; y++){
			printf("y = %d\n", y);
		}
		printf("\n");
	}
} 

void conditions(){
//	int i;
//	if(i == 0){
//		//
//	}
//	//code khac
//	if (i < 0){
//		//
//	}
	int x, y;
	y = 11;
	x = 0;
//	if (y <= 11 || y > 20)
//	{
//		x += 5;
//		x += 9;
//		if(x != 14){
//			printf("x = 14");
//		}
//	}
//	else if(){
//		
//	}else{
//		
//	}
//	printf("ket qua: x=%d, y=%d",x,y);

	char checkChoice;
	printf("Enter choice:");
	scanf("%c", &checkChoice);
	
	switch(checkChoice){
		case 'y':
			printf("Yes");
			break;
		case 'n':
			printf("No");
			break;
		default:
			printf("Invalid");
	}
	
}
