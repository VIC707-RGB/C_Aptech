#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("So cac so nguyen: ");
	scanf("%d", &n);
	
	int cacSoNguyen[n];
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap vao phan tu thu %d: ", i);
		scanf("%d", &cacSoNguyen[i]);
	}
	
	int tong = 0;
	for(i = 0; i < n; i++){
		tong += cacSoNguyen[i];
	}
	printf("Tong: %d", tong);
	
	return 0;
}

void pointers2(){
	int *ptr, *ptr2; //khai bao 1 con tro
	int i = 10; int j;
//	printf("\nCach truc tiep:");
//	i = function(); j = function();
//	printf("i = %d, j = %d\n", i,j);
//	
//	printf("\nCach gian tiep: ");
//	functionWithPointer(&i, &j);
//	printf("i = %d, j = %d", i,j);
	
	ptr = &i; //ptr duoc gan gia tri dia chi cua i: &i goi ra dia chi cua i
	j = *ptr; //j = 10: ptr co chua gia tri dia chi ma ben trong dia chi day co gia tri goc la 10
	printf("ptr: %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
	
	//arithmetic
	ptr--;
	printf("ptr: %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
} 

//cach gian tiep
void functionWithPointer(int *a, int* b){
	*a = 100;
	*b = 7;
}

//cach truc tiep
int function(){ 
	//codes....
	return 100;
}

void twoDarray(){
	int cacSoNguyen[4]; //mang 1 chieu
	int numbers[4][3]; //mang 2 chieu
	
	int i,j, index;
	index = 1;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			numbers[i][j] = index; //truy cap den tung phan tu trong mang 2 chieu
			index++;
			printf("numbers[%d][%d] = %d, ", i, j, numbers[i][j]);
		}
		printf("\n");
	}
}

void string(){
	char arr[5]; //chuoi
	printf("Go vao chuoi:");
	scanf("%s", &arr);
	printf("%s", arr);
	
	char arr2[5];
	printf("\nGo vao chuoi:");
	scanf("%s", &arr2);
	printf("%s\n", arr2);
	
//	printf("\nSu dung ham strcpy:");
//	strcpy(arr, arr2); 
//	printf("\n%s", arr);
//	printf("\n%s", arr2);

//	printf("Su dung ham strcat: ");
//	printf("%s\n", strcat(arr, arr2));

	printf("Su dung ham strlen: ");
	printf("%d\n", strlen(arr));
	
	printf("Su dung ham strcmp: ");
	if(strcmp(arr, arr2) == 0){
		printf("2 chuoi giong nhau");
	}else if(strcmp(arr, arr2) > 0){
		printf("arr > arr2");
	}else if(strcmp(arr, arr2) < 0){
		printf("arr < arr2");
	}
}

void arrayBasics(){
	int i;
	int cacSoNguyen[10]; 
	cacSoNguyen[0] = 10; //phan tu dau tien - su dung nhu la 1 bien
	cacSoNguyen[1] = 10;
	cacSoNguyen[2] = 10;
	
	int tapHopSo[3];
//	tapHopSo = cacSoNguyen; -> SAI
//	tapHopSo = 10 -> SAI
	tapHopSo[0] = cacSoNguyen[0];
	
//	printf("cacSoNguyen[0] = %d\n", cacSoNguyen[0]);
//	printf("tapHopSo[0] = %d\n", tapHopSo[0]);
	printf("Truoc khi gan gia tri: \n");
	for(i = 0; i < 10; i++){
		printf("cacSoNguyen[%d] = %d\n", i, cacSoNguyen[i]);
	}
	printf("\nSau khi gan gia tri: \n");
	for(i = 0; i < 10; i++){
		cacSoNguyen[i] = i;
		printf("cacSoNguyen[%d] = %d\n", i, cacSoNguyen[i]);
	}
}
