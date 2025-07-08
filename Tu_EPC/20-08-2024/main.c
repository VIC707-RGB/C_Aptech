#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int o = 19;
	int *ptr_o = &o;
	pointers(ptr_o);
	return 0;
}



void pointers(int *i, int a, float b){
	int *ptr_i; //khai bao 1 con tro
	printf("Address in i: %p\n", i);
	printf("i = %d\n", *i); //
	ptr_i = &i;
	printf("Address of i: %p\n", ptr_i);
	printf("i = %d\n", *ptr_i); //
	
	printf("Change number: ");
	scanf("%d", ptr_i);
	printf("Number: %d\n", i);
	*ptr_i = 17;
	printf("Number: %d\n", i);
	
	int *ptr;
	ptr = (int *)malloc(10 * sizeof(int));
//	return i;
}
