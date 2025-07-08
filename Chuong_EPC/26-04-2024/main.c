#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	string();
	mallocExample();
	return 0;
}

void mallocExample(){
	int *k, n, i;
	n = 3;
	k = (int *)malloc(n * sizeof(int));
	for(i=0; i<3; i++){
		printf("Enter *(k+%d): ", i);
		scanf("%d", (k+i));
	}
	for(i=0; i<3; i++){
//		*(k+i) = i;
		printf("Gia tri thu 1 (dia chi cua a): %p\n", k+i);
		printf("Gia tri thu 2 (gia tri cua a dc tro toi): %d\n\n", *(k+i));
	}
	free(k);
	for(i=0; i<3; i++){
//		*(k+i) = i;
		printf("Gia tri thu 1 (dia chi cua a): %p\n", k+i);
		printf("Gia tri thu 2 (gia tri cua a dc tro toi): %d\n\n", *(k+i));
	}
}

void pointerExample(){
	int a=10; int i;
	int mang[3];
	int *k = &mang;
	for(i=0; i<3; i++){
		printf("Enter *(k+%d): ", i);
		scanf("%d", (k+i));
	}
	for(i=0; i<3; i++){
//		*(k+i) = i;
		printf("Gia tri thu 1 (dia chi cua a): %p\n", k+i);
		printf("Gia tri thu 2 (gia tri cua a dc tro toi): %d\n\n", *(k+i));
	}
	
}

int pointerDefi(int *j){
	return j;
}

void arrayExample(){
	//mang
	int numbers[23];
	int integers[23];
//	numbers=integers;
	
	numbers[0]=10; //goi 1 phan tu cua mang o vi tri 0
	printf("numbers[0]: %d\n", numbers[0]);
	numbers[10]=numbers[0];
	printf("numbers[10]: %d\n", numbers[10]);
	scanf("%d", &numbers[10]);
	printf("numbers[10] - numbers[0] = %d\n", numbers[10] - numbers[0]);
}

void arrayInit(){
	int numeric[26];
	int i, j;
	for(i=65,j=0; i<91, j<26; i++,j++)
	{
		numeric[j] = i;
		printf("The character now assigned is %c \n", numeric[j]);
		printf("The integer now assigned is %d \n\n", numeric[j]);
	}
}

void string(){
	char name[24]; //day la 1 chuoi (char[]) dai 24 ki tu
	char name2[24];
	gets(name);
	gets(name2);
//	printf("\nTen 1: %s", name);
//	strcpy(name2, name);
//	printf("\nTen 2: %s", name2);
//	printf("\nTen noi: %s", strcat(name2,name));
	if(strcmp(name, name2) > 0){
		printf("%s > %s", name, name2);
	}else if(strcmp(name, name2) < 0){
		printf("%s < %s", name, name2);
	}else{
		printf("%s = %s", name, name2);
	}
}


