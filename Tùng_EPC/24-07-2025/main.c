#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 10;
	printf("Enter x: \" %% trello\n");
	scanf("%d", &x);
	printf("x: %d, constant: %d\n", x, 19+1);
	printf("Using console I/O on computer: ");
	char c;
	fflush(stdin);
	c = getchar(); //Input char
	putchar('\n'); //Output char
	fflush(stdout);
	printf("\nfloat: %.2f, char: %c\n", 3.14, 'k');
	printf("Hello: %s\n", "Alice");
	
	
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

	
	return 0;
}

void operators(){
	int x, y; //multiple declaration
	x = y = 10; //multiple assignment
	int z = x + y - 10^10 * x++ / y-- + (-1); 
	
	//expressions: operators & values (operands)
	//operators: connection between values (operands)
	// assignment operator (=)
	
	//arithmetic operators
	int tong = x + y;
	int hieu = y - 10;
	int tich = 10 * 2;
	int thuong = 20 / 3;
	int soDu = 20 % 3;
	int cong1DonVi = x++;
	int tru1DonVi = x--;
	
	//relational operators
	//use if(): conditional
	//if () returns true -> {//code}
	if(tong >= 10){
		printf("tong > 10\n");
	}
	if(tong <= 10){
		printf("tong < 10\n");
	}
	if(tong == 20){
		printf("tong == 20\n");
	}
	if(tong != 10){
		printf("tong != 10\n");
	}
	
	//logical operators
//	tong = 10;
	if(tong >= 10 && tong <= 10){
		//tong >= 10 -> true
		//tong <= 10 -> true
		//&&: -> true
		printf("&&\n");
	}
	if(tong >= 10 || tong <= 10){
		//tong >= 10 -> true
		//tong <= 10 -> false
		// ||: -> true
		printf("||\n");
	}
	if(!(tong >= 10) && (tong+1 <= 10 || tong != 10)){
		printf("true\n");
	}
	
	//logical bitwise operators
	y = 0;
	if(x & y){ //returns true if x and y translates to 1 (not 0)
		printf("x & y\n");
	}
	if(x | y){ //returns true if x or y translates to 1 (not 0)
		printf("x | y\n");
	}
	unsigned int bit1 = ~y;
	unsigned int bit2 = ~x;
	if(x ^ y){ //returns true if x or y translates to 1 (not 0), but not both to 1 or 0
		printf("x ^ y\n");
	}
	
	//type conversion
	//automatic: auto convert type
	//when operands with different types in same expression
	//manual
	float h, f;
	f = 3.14159;
	h = (int) f; //force type-casting
	printf("%f, %f\n", h, f);
}
