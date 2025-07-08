#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//array:
	int arrayInt[10]; //syntax example
//	arrayInt[0]; //syntax for array element call example -> same as a variable
	int arrayInt2[10];
	
	int g = 0;
//	arrayInt[g] = arrayInt[1] = arrayInt[2] = 10;
//	arrayInt2[g] = arrayInt2[1] = arrayInt2[2] = 10;

	//two-dimensional array
	int array2d[3][4]; //syntax
	int i,j, n; n = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			array2d[i][j] = n;
			printf("array2d[%d][%d] = %d,  ",i,j, array2d[i][j]);
			n++;
		}
		printf("\n\n");
	}
	
	exit(0);
	//STRING (1)
	char str1[10];
	printf("Enter string:");
	scanf("%s", &str1);
	char str2[10];
	printf("Enter string:");
	scanf("%s", &str2);
	
	//string functions
	printf("String 1: %s, String 2: %s\n", str1, str2);
	if(strcmp(str1, str2) < 0){
		printf("str1 < str2\n");
	}
	strcat(str1, str2); //concatenates str2 to end of str1
	printf("String 1: %s, String 2: %s\n", str1, str2);
	if(strcmp(str1, str2) > 0){
		printf("str1 > str2\n");
	}else if(strcmp(str1, str2) < 0){
		printf("str1 < str2\n");
	}
	printf("String 1's length: %d\n", strlen(str1));
	strcpy(str1, str2); //copies str2 to str1
	printf("String 1: %s, String 2: %s\n", str1, str2);
	if(strcmp(str1, str2) == 0){
		printf("str1 = str2\n");
	}

	for(g = 0; g < 10; g++){
		arrayInt[g] = g;
		arrayInt2[g] = g;
		printf("arrayInt[%d] = %d\n",g, arrayInt[g]);
		printf("arrayInt2[%d] = %d\n",g, arrayInt2[g]);
		
	}
	arrayInt[8] = 123;

//	arrayInt = arrayInt2; //no nos
	//conditional variable
	int diff = 0; ////if only 1 case is not equal
	for(g = 0; g < 10; g++){ 
	//condition: all members of each array according to
	//said index/indices equals
		if(arrayInt[g] != arrayInt2[g]){ //if only 1 case is not equal
			diff++;
			break;
		}else {
			continue;
		}
	}
	
	//-> diff becomes condition for examining ALL cases
	if(diff != 0){
		printf("arrayInt[] != arrayInt2[]");
	}else if(diff == 0){
		printf("arrayInt[] == arrayInt2[]");
	}
	
	
	printf("arrayInt[0]: %d\n", arrayInt[0]);
	printf("Enter new data for arrayInt[0]: ");
	scanf("%d", &arrayInt[0]);
	printf("arrayInt[0]: %d\n", arrayInt[0]);
	
	return 0; //helps functions return values according to data types
}

void loops(){
	//for-loop: manual number of loops
	int i, j;
//	INIT:
	//initialize counter: starting point
	//conditional test: expression to test
	//re-evaluation parameter
	for(i = 0, j = 10; i < 10, j >= 0; i++, j--){ //conditional test: same with i < 10 || j >= 0
//		if(i >= 10){
//			printf("j = %d\n", j);
//		}else{
//			printf("i: %d, j = %d\n", i, j);
//		}
	}
	
	for(i = 0; i < 10; i++){
//		//statements
//		printf("i: %d\n", i);
//		for(j = 10; j >= 0; j--){ //nested-for
//			printf("	j: %d\n", j);
//		}
	}
	
	i = 0; j = 10;
	while(i < 10){
		//statements
		break;
		printf("i = %d\n", i);
//		i++; //re-evaluation statement
		if(j >= 0){
//			goto: INIT;
			continue; //continue the loop - skip all remaining statements
			j--;
		}else if(j < 0){
			break; //jump outside loop/condition
		}
	}
	
	do{
		printf("i != 0");
	}while(i != 0);
	
	printf("outside loop");
	
	exit(0); //terminate program
}
