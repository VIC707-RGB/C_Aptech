#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int n = returnNum();
//	int n1 = returnNum();
//	int n2 = returnNum();
//	
//	printf("n = %d\n", n);
//	printf("n1 = %d\n", n1);
//	printf("n2 = %d\n\n", n2);
//	returnNumUsingPointers(&n, &n1, &n2);
//	printf("n = %d\n", n);
//	printf("n1 = %d\n", n1);
//	printf("n2 = %d\n", n2);

	pointerAndStrings();
	return 0;
}

void allocatingMemory(){
	int *ptr_i;
	
	ptr_i = (int *)malloc(10 * sizeof(int));
	
	//*(ptr_i+i) = 1
	
	free(ptr_i);
}

void pointerAndStrings(){
	char a, str[81], *ptr;
	printf("\nEnter a sentence:");
	gets(str);
	printf("\nEnter character to search for:");
	a = getche();
	ptr = strchr(str,a);
	/* return pointer to char*/
	printf( "\nString starts at address: %p",str);
	printf("\nFirst occurrence of the character is at address: %p ",ptr);
}

void pointerWithArray(){
	static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	for (i = 0; i < 10; i ++)
	{
		printf("ary[%d]=%d, *(ary+%d)=%d\n",i,ary[i],i,*(ary + i));
		printf("&ary[i]= %p, ary+i=%p\n\n",&ary[i],ary+i);
		/* %X gives unsigned hexadecimal */
	}
}

void pointerArithmetic(){
	int i1;
	int *ptr_i = &i1;
	
	printf("address: %p\n", ptr_i);
	int *ptr_ = --ptr_i;
	printf("address: %p", ptr_);
}

int returnNumUsingPointers(int *n, int *n1, int *n2){
	*n = 10;
	*n1 = 20;
	*n2 = 30;
}

void pointerBasics(){
	int n;
	int *ptr_n;
	ptr_n = &n; //&: tra ve dia chi  
	
	printf("n = %d\n", n);
	printf("dia chi cua n = %p\n", &n);
	printf("n = %d\n", *ptr_n);
	printf("dia chi cua n = %p\n", ptr_n);
//	printf("%d\n", n1);
//	printf("%d\n", n2);
}

int returnNum(){
	return 8;
}


