#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	structBasics();
	return 0;
}

struct cat
{ 
	char bk_name [25];
	char author [20];
	int edn;
	float price;
};
typedef struct cat Category;
void structBasics(){
	Category Book1;
	Category Book2;
	
	fflush(stdin);
	gets(Book1.bk_name);
	fflush(stdout);
	puts("Result: ");
	puts(Book1.bk_name);
	
	strcpy(Book1.bk_name, "Hello");
	puts(Book1.bk_name);
}

void allocatingMemory(){
	int *a = (int *)malloc(10*sizeof(int));
	int i;
	for(i = 0; i < 7; i++){
		*(a + i) = i;
		printf("b[%d] = %d\n", i, *(a + i)); //pointer call
		printf("&b[%d] = %p\n", i, (a + i));
	}
	free(a);
	printf("after free: \n");
	for(i = 0; i < 7; i++){
		printf("b[%d] = %d\n", i, *(a + i)); //pointer call
		printf("&b[%d] = %p\n", i, (a + i));
	}
}

void pointerWithString(){
	char a, str[81], *ptr;
	printf("\nEnter a sentence:");
	gets(str);
	printf("\nEnter character to search for:");
	a = getchar();
//	ptr = strchr(str,a);
	/* return pointer to char*/
	printf( "\nString starts at address: %p",str);
	printf("\nFirst occurrence of the character is at address: %p ",ptr);
}

void pointerWithArray(){
	int b[7];
	int i;
	for(i = 0; i < 7; i++){
		b[i] = i;
		printf("b[%d] = %d\n", i, b[i]); //normal call
		printf("&b[%d] = %p\n", i, &b[i]);
	}
	printf("With pointer operator: \n");
	for(i = 0; i < 7; i++){
		printf("b[%d] = %d\n", i, *(b + i)); //pointer call
		printf("&b[%d] = %p\n", i, (b + i));
	}
}

void pointerArithmetic()
{
	int a, *b;
	b = &a;
	printf("b => %p", b);
	
	b++; //
	b++; //
	b++; //
	printf("\nb => %p", b);
}

void pointerBasics(){
	int a = 10;
	
	//pointer
	int *b = &a; //*: pointer operator ; &: memory operator
	
	printf("a = %d", *b);
	printf("\n&a = %p", b);
	
	*b = 15;
	printf("\n\na = %d", a);
	printf("\n&a = %p", b);
}
