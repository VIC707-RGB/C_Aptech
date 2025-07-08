#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void variables(){
	//syntax
	int i = 10;
	printf("\"Integer: %d\n", i);
	printf("Enter integer: ");
//	fflush(stdin);
	scanf("%d", &i);
//	fflush(stdout);
	printf("Integer: %d\n", i);
	
	float length; /*length of type float */
	printf("Enter length: ");
	scanf("%f", &length);
	printf("length: %.2f, %d\n", length, 300);
	
	char abc; /*abc of type character */
	int xyz; /*xyz of type integer */
	
	double area; /*area of type double */
	long liteyrs; /*liteyrs of type long int */
	short arm;
	
	float x,f;
	f = 3.14159;
	x = (int) f;
	printf("x = %.0f, f = %f", x, f);
}

int main(int argc, char *argv[]) {
	printf("Hello!"); 
	variables();
	return 0;
}

void IOformat(){
	printf("The number 555 in various forms:\n");
	printf("Without any modifier: \n");
	printf("[%d]\n",555);
	printf("With � modifier :\n");
	printf("[%-d]\n",555);
	printf("With digit string 10 as modifier :\n");
	printf("[%10d]\n",555);
	printf("With 0 as modifier : \n");
	printf("[%0d]\n",555);
	printf("With 0 and digit string 10 as modifiers :\n");
	printf("[%010d]\n",555);
	printf("With -, 0 and digit string 10 as modifiers: \n");
	printf("[%-010d]\n",555);
	
	char letter;
	printf("\nPlease enter any character : ");
	letter = getchar();
	printf("\nThe character entered by you is %c", letter);
}