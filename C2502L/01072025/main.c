#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//conditionals
	int a,b;
	printf("Enter a: ");
	scanf("%d", &a);
//	printf("Enter b: ");
//	scanf("%d", &b);
	
	//switch-case
	switch(a){
		case 1:
			printf("a = 1");
			break; //
		case 2:
			printf("a = 2");
			break;
		//case n: ...
		default: //else
			printf("default");
			break;
	}
	
	//syntax if-else-if statement
//	if(a + b >= 10){
//		printf("a + b > 10");
//	}else if(a + b <= 10){
//		printf("a + b < 10");
//	}else if(a + b == 10){
//		printf("a + b == 10");
//	}
	
	//syntax if statement(s)
	//if(a + b >= 10 && a + b <= 10){ //with logic operators
//	if(a + b >= 10){ 
//		printf("a + b >= 10");
//		//nested-if
//		if(a + b > 10){
//			printf("\na + b > 10");
//		}
//		if(a + b == 10){
//			printf("\na + b = 10");
//		}
//	}
//	if(a + b <= 10){
//		
//		if(a + b < 10){
//			printf("a + b < 10");
//		}
//	}
//	if(a + b == 10){
//		printf("a + b == 10");
//	}
	
	return 0;
}

void operators(){
	//operators & operands = expressions
	float a,b,c;
	a = b = c = 10;
//	printf("%d", a);
	
	float arithmetic = a + b - c * 7 / 3;
//	float arith = (int)arithmetic % 5; //so du
	printf("%f", arithmetic);
	
	if(arithmetic < 0 || a != 10){
		// &&: AND
		// ||: OR
		//do sth
		printf("\nsuccess");
	}
}

void io(){
	//output - syntax
	int a = 10; float b = 15; char c = 'd';
//	printf("Hello 	world! int a = %d, float b = %.2f, char c = %c", a,b,c);
//	modifiers();

	//input - syntax
	printf("Enter new data for a: ");
	scanf("%d", &a); //&a: address of a
	printf("New data of a: %d", a);
	
	//console i/o
	printf("Enter new char: ");
	c = getchar();
	printf("New char: ");
	putchar(c);
}

void modifiers()
{
	printf("The number 555 in various forms:\n");
	printf("Without any modifier: \n");
	printf("[%d]\n",555);
	printf("With – modifier :\n");
	printf("[%-d]\n",555);
	printf("With digit string 10 as modifier :\n");
	printf("[%10d]\n",555);
	printf("With 0 as modifier : \n");
	printf("[%0d]\n",555);
	printf("With 0 and digit string 10 as modifiers :\n");
	printf("[%010d]\n",555);
	printf("With -, 0 and digit string 10 as modifiers: \n");
	printf("[%-010d]\n",555);
}

void variables(){
	//variable:
	int a; //declare 1 var
	a = 15;
	
	//integer
	int b = 10;
	//float
	float f = 10.123456;
	//double
	double d = 10.12345678955555555;
	//char - character
	char c = 'c';
}
