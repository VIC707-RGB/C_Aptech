#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float giveNum(){
	return 98;//mandatory for all functions that returns value
}

//squarer(int x){
//	return x*x;
//}

int main(int argc, char *argv[]) {
	printf("%f", giveNum());
	allocatingMemory();
	return 0;
}

void allocatingMemory(){
	//allocating memory
	int *ptr, *ptr2;
	ptr = (int*) malloc (3 * sizeof(int)); //syntax, basic allocation
	ptr2 = (int*) calloc (3, sizeof(int)); //allocation + default values = 0
	int i;
	for(i = 0; i < 3; i++){
		*(ptr2 + i) = i;
		printf("Element address: %p, value: %d\n", (ptr2 + i), *(ptr2 + i));
	}
	
	printf("re-allocating: \n");	
	ptr2 = (int*) realloc (ptr2, 7 * sizeof(int)); //allocating next addresses
	for(i = 0; i < 10; i++){
		*(ptr2 + i) = i;
		printf("Element address: %p, value: %d\n", (ptr2 + i), *(ptr2 + i));
	}
	//allocating more memory to existing allocated memories (pointers allocated)
	
	free(ptr);
	free(ptr2); //ptr must be allocated by malloc or calloc, frees memory
}

void stringAndArrayWithPointers(){
		//string
	char string[20], string2[10];
	char a;
	printf("Enter string: ");
	gets(string);
	printf("Enter string 2: ");
	gets(string2);
	printf("First occurence of char a in string: %p\n", strstr(string, string2));
	
	printf("Enter character to find in string: ");
	a = getchar();
	printf("First occurence of char a in string: %p\n", strchr(string, a));
	printf("address: %p", &string[0]);
	
	
	int num[3];
	
	//address of array element:
	&num[0];
	(num + 0);
	//value of array element:
	num[0];
	*(num + 0);
	
	int i;
	for(i = 0; i < 3; i++){
//		num[i] = i;
//		printf("num[%d] = %d, address: %p\n", i, num[i], &num[i]);
		*(num + i) = i;
		printf("num[%d] = %d, address: %p\n", i, *(num + i), (num + i));
	}
	
//	int arr2d [3][2];
//	(arr2d + 0); //
}

void basicPointers(){
	int num, num2; //normal variable
//	printf("Enter num: ");
//	scanf("%d", &num); //&num is address of int num
	
	//pointer has address of int num:
	int *ptr_num = &num; //declare a pointer
	int *ptr_num2 = &num2; 
	//int: 4 bytes
	printf("address of num: %p, address of num2: %p\n", ptr_num, ptr_num2);
	//comparision: who goes before/after who
	if(ptr_num > ptr_num2){
		printf("ptr_num is stored after ptr_num2\n");
	}
	if(ptr_num < ptr_num2){
		printf("ptr_num is stored before ptr_num2\n");
	}
	if(ptr_num == ptr_num2){
		printf("ptr_num and ptr_num2 both points to the same address\n");
	}
	if(ptr_num != ptr_num2){
		printf("ptr_num and ptr_num2 both points to the different addresses\n");
	}
	
	*ptr_num = 7; //indirectly assign value to num by ptr_num
	printf("Num: %d, address of num: %p\n", num, &num);
	printf("Num: %d, address of num: %p\n", *ptr_num, ptr_num);
	
//	ptr_num++; //move to address after last address
//	ptr_num--; //move to address before last address
//	ptr_num += 5; // move to address after last address 5 times
//	ptr_num -= 5; // move to address before last address 5 times
//	++*ptr_num; //or (*ptr_num)++ // same with num++
//	*ptr_num++; //fetch value of next integer of num
	printf("Num: %d, address of num: %p\n", num, &num);
	printf("Num: %d, address of num: %p\n", *ptr_num, ptr_num);
	
//	exit(0);
	int x = 10; int y = 20;
	printf("x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
//	return x, y; //no no
}
