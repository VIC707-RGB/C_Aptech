#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	return 0; //The return statement is used to return from a function
}
void jumpStatements(){
		float i = 0.5;
//	while1:
	while(i <= 10){
		//condition
		printf("i: %f\n", i);
		i += 0.5;
//		break;
		continue;
		exit(0);
		printf("Hello");
		printf("Hello");
		printf("Hello");
	}
	printf("Do-while:\n");
	do{
		printf("i: %f\n", i);
		i += 0.5;
	}while(i <= 10);
//	goto while1; //unpredictable
}
void forLoop(){
	int i, j;
	for(i = 1; i <= 10; i++)
	{ 	
		//ex: repeat 10 times
		//repeats until () done counting
		//init counter: start
		//conditional test
		//re-evaluation parameter
		
		printf("Loop %d \n", i);
	}
	printf("End of loop 1\n");
	
	for(i = 1; i <= 10; i++){
		printf("i: %d\n", i);
		for(j = 10; j >= 1; j--){ //nested for loop
			printf("\tj: %d\n", j);
		}
		printf("\n");
	}
	
	for(i = 1, j = 10; i <= 10, j >= 0; i++, j--)
	{ 	
	//comma operator
		printf("Loop has i = %d, j = %d \n", i, j);
	}
}
