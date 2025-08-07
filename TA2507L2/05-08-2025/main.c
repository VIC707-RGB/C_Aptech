#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p;
	//allocating memory
	//malloc
	p = (int *)malloc(3 * sizeof(int));
	//input array
	int i;
	for(i = 0; i < 3; i++){
		printf("Enter number[%d]: ", i);
		scanf("%d", p + i);
	}
	//output array
	for(i = 0; i < 3; i++){
		printf("\nNumber[%d]: %d", i, *(p + i));
	}
	//free
	free(p);
	//calloc
	p = (int *)calloc(3, sizeof(int));
	//output array
	for(i = 0; i < 3; i++){
		printf("\nNumber[%d]: %d", i, *(p + i)+1);
	}
	//realloc
	p = realloc(p, 2*sizeof(int));
	for(i = 0; i < 5; i++){
		printf("\nNumber[%d]: %d", i, *(p + i));
	}
	free(p);
	return 0;
}
void pointerWithString(){
	char str[100], ch, *p, substr[100];
	int i;
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	printf("Enter search string: ");
	fgets(substr, sizeof(substr), stdin);
	printf("Enter character: ");
	ch = getchar();
	
	//get rid of \n
	for(i = 0; i < strlen(substr); i++){
		if(*(substr + i) == '\n'){
			*(substr + i) = '\0';
		}
	}
	
	p = strchr(str, ch);
	printf("p: %p\n", p);
	//index of first occuring
	for(i = 0; i < strlen(str); i++){
		if((str + i) == p){
			printf("First occuring char at: str[%d]", i);
		}
	}
	printf("\n");
	p = strstr(str, substr);
	printf("p: %p\n", p);
	//index of first occuring
	for(i = 0; i < strlen(str); i++){
		if((str + i) == p){
			printf("First occuring string at: str[%d]", i);
		}
	}
}
void pointerWith2DArray(){
	int a[2][3];
	
	int (*ap)[2] = &a;
	//a[0]
	*(a[0] + 3) = 10;
	printf("%d", *(a[0] + 3));
	
	//input array
	int i,j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Enter number[%d][%d]: ", i, j);
			scanf("%d", (a[i] + j));
		}
	}
	//output array
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("\nNumber[%d][%d]: %d", i, j, *(a[i] + j));
		}
	}
}
void pointerWith1DArray(){
	int *p;
	int arr[10];
	
	//2 ways
	//arr[0]
	p = &arr[0];
	p = (arr + 0); //
	
	//input array
	int i;
	for(i = 0; i < 10; i++){
		printf("Enter number[%d]: ", i);
		scanf("%d", arr + i);
	}
	//output array
	for(i = 0; i < 10; i++){
		printf("\nNumber[%d]: %d", i, *(arr + i));
	}
}
