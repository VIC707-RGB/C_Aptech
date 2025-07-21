#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

int main(){
	//add two numbers
	printf("\nEnter A:");
	int a; // syntax: data_type variable_name;
	scanf("%d", &a);//input a
	printf("Enter B:");
	int b;
	scanf("%d", &b);//input b
	
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	int thuong = a / b;
	int du = a % b;
	
	printf("tong = %d\n", tong);
	printf("hieu = %d\n", hieu);
	printf("tich = %d\n", tich);
	printf("thuong = %d\n", thuong);
	printf("du = %d\n", du);
	
	//algorithm (
	//1. Make a new project
	//2. type in command:
		//pseudocode: algorithm for program specifically
		/* 
		BEGIN 
		DISPLAY 'Hello!'
		END
		*/
	//3. run the project
	
//	printf("Hello!");
	
//	function();
//	do{
//		printf("I'm fine :3");
//	}while();
	return 0;
}

void variableAndDataTypes(){
		//type int
	int integer; //4 bytes
	unsigned int unInt; //4 bytes
	short int shortInt; //2 bytes
	long int longInt; //8 bytes - only takes in integer values
	integer = 19;
	printf("Enter integer:");
	scanf("%d", &integer);
	printf("This is an integer: %d\n", integer);
	//type float
	float f; //8 bytes
//	unsigned float unFloat; //8 bytes
	f = 19.897423;
	printf("Enter float:");
	scanf("%f", &f);
	printf("This is a float: %f\n", f);
	//type double
	double d; //16 bytes
	long double longDouble; //32 bytes
	d = 19.8974235225;
	printf("Enter double:");
	scanf("%lf", &d); //long float
	printf("This is a double: %lf\n", d);
	//type char
	char character; //1 byte
	character = 'c';
	printf("Enter character:");
	fflush(stdin);
	scanf("%c", &character);
	fflush(stdout);
	printf("This is a character: %c\n", character);
}

void function(){
	printf("How are u?");
}
