#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	printf("%d",calByPointer(&i, &y));
//	calByPointer(&i, &y);
	
//	int n[3];
//	//cach truc tiep
//	n = arraysWPointers();
//	//cach gian tiep
//	example(&arraysWPointers());

	DirectMemoryAllocation();
	return 0;
}

void calByPointer(int *a, int *b){ //tra ve 2 loai gia tri
	printf("%d\n",*a+*b); //gia tri cua bien ma cac con tro dang tro toi
	printf("a = %u, b = %u", a, b); //gia tri cua chinh bien con tro
}

void DirectMemoryAllocation(){
	int *ptr, i;
	ptr = (int*)malloc(5*sizeof(int));
//	ptr = (int*)calloc(5, sizeof(int));
//	ptr = (int*)realloc(ptr, 7*sizeof(int));
	
	for(i=0; i<5; i++){
		printf("Enter number %d:", i);
		scanf("%d", (ptr+i));
	}
	for(i=0; i<5; i++){
		printf("\nNumber %d: %d", i, *(ptr+i));
	}
	
	free(ptr);
	for(i=0; i<5; i++){
		printf("\nNumber %d: %d", i, *(ptr+i));
	}
}

void arraysWithPointers(){
	//1D
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptr_ary = &ary;
	int i;
	for (i = 0; i < 10; i ++)
	{
		printf("\ni = %d, ary[i]=%d, *(ptr_ary+i)=%d\n", i, ary[i], *(ptr_ary + i));
		printf("&ary[i]= %u,ary+i=%u",&ary[i],(ptr_ary+i));
		/* %X gives unsigned hexadecimal */
	
	}
	//2D
	int D2[3][4];
//	int *ptr_2D[4] = D2;
	
	//string
	char str[81], *ptr;
	ptr = &str;
	printf("\nEnter a sentence:");
	gets(str);
	printf("\nsentence: %s", str);
	for(i = 0; i<81; i++){
		printf("\n%c", *(ptr+i));
	}
	
}

//void pointerArithmetic(){
//	int var, *ptr;
//	ptr = &var;
//	printf("ptr: %u\n", ptr);
//	printf("&var: %u\n", &var);
//	
//	var = 500;
//	printf("*ptr: %d\n", *ptr);
//	printf("var: %d\n", var);
//	
//	ptr++; //dia chi bien con tro dang tro toi thay doi
////	&var++;
//	printf("ptr: %u\n", ptr);
//	
//	*ptr = 10;
//	printf("ptr: %u\n", ptr);
//	printf("*ptr: %d\n", *ptr);
//	printf("var: %d\n", var);
//	printf("&var: %u\n", &var);
//}

//void pointerBasics(){
//	int i=10; float y=20;
//	printf("i = %d\n", i);
//	int *ptr = &i; //pointer
//	int *ptr2 = ptr;
//	*ptr = 40;
//	printf("i = %d\n", i);
//	printf("*ptr = %d\n", *ptr);
//}

//int arraysWPointers(){
//	int numbers[3]={1,2,3};
//	return numbers;
//}

//void example(int * a){
////	printf("%d", )
//}
