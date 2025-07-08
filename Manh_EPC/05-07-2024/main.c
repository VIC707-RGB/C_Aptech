#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	io();
	return 0;
}

void io(){
	char c;
	printf("Enter a char:");
	c = getchar(); //syntax
	printf("Char: ");
	putchar(c);
}

void operators(){
	//relational
	int n, m;
	n = 10; m = 9;
	float f = 3.12;
	if(n != 11 || n < 19){ // if(n & m)
	//&&: tra ve true neu ca 2 bieu thuc tra ve true
	//||: tra ve true neu 1 trong 2 bieu thuc tra ve true
		printf("n > 11 \n");
		printf("n < 19\n");
		scanf("%d", &n); 
	}
//	if(n < 19){
//		printf("n < 19");
//	}	
n++;
	float result = f + n;
	
	printf("result: %f", result);
}
