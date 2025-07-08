#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inputArray(int *arr, int n){
	//input array by pointer
	int i;
	for(i = 0; i < n; i++){
		printf("enter numbers[%d]: ", i);
		scanf("%d", (arr + i)); //kieu goi con tro
//		scanf("%d", &arr[i]);
	}
}
void printArray(int *arr, int n){
	//print array by pointer
	int i;
	for(i = 0; i < n; i++){
		printf("numbers[%d]: %d\n", i, *(arr + i)); //kieu goi con tro
		
		//cu phap bthg / cu phap con tro (ARRAY)
//		arr[i] => 10    			(arr + i) => 60IRD2 (GTRI CON TRO TRO DEN PHAN TU THU i CUA MANG)
//		&arr[i] => GTRI CON TRO     *(arr + i) => 10
//		arr => GTRI CON TRO TRO DEN MANG
	}
}
void bai6(){
	//nhap mang
	int index;
	printf("Nhap vao so phan tu mang: ");
	scanf("%d", &index);
	
	int numbers[index]; //lay dia chi cua mang numbers -> sd con tro
	inputArray(numbers, index);
	printArray(numbers, index);
}

int kiemTraSoThuanNghich(int num){
	int soDaoNguoc = 0; 
	int soGoc = num;
	while(num > 0){
		// num = 1
		// num % 10 == 0
		// reversed*10 += 321
		// num / 10 = 0
		soDaoNguoc = soDaoNguoc * 10 + (num % 10);
		num /= 10;
	}
	if(soGoc == soDaoNguoc){
		return 1;
	}else{
		return 0;
	}
}
void demSoThuanNghich(int *arr, int n){
	printf("Cac so thuan nghich trong mang: ");
	int i, count; count = 0;
	for(i = 0; i < n; i++){
		if(kiemTraSoThuanNghich(*(arr + i)) == 1){
			printf("%d ", *(arr + i));
			count++;
		}
	}
	printf("\nTong so cac gia tri thuan nghich: %d", count);
}

void themPhanTu(int *arr, int *n, int gTri, int viTri){
	int i;
	//. 0 1 2 3 4 5 6 7
   // 2 3 4  9 5 6 7 8
	for(i = *n; i > viTri; i--){ //
		*(arr + i) = *(arr + (i-1));
	}
	*(arr + viTri) = gTri;
	(*n)++;
}
void assignment8(){
	int n;
	printf("Nhap so luong cac phan tu: ");
	scanf("%d", &n);
	int arr[n], i, gTri, viTri;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap gia tri: ");
	scanf("%d", &gTri);
	printf("Nhap vi tri: ");
	scanf("%d", &viTri);
	themPhanTu(arr, &n, gTri, viTri);
	printf("Mang sau khi them: ");
	for(i = 0; i < n; i++){
		printf("phan tu thu %d: %d\n", i, arr[i]);
	}
	
//	demSoThuanNghich(arr, 10);
	
}
int main(int argc, char *argv[]) {
	assignment8();
	return 0;
}

void reviseArray(){
		//khai bao 
	int number[10]; // 
	int floats[10];
	
//	number = floats; //sai
	
	//cho mang number = 10
	int i; //index
	for(i = 0; i < 10; i++){
		number[i] = 10; //goi ra tung phan tu theo tung lan lap
	}
	for(i = 0; i < 10; i++){
//		printf("number[%d] = %d\n", i, number[i]); //goi ra tung phan tu theo tung lan lap
	}
	
	//string
	char s1[100]; //1 chuoi
	printf("Nhap ten: ");
//	scanf("%s", &string);
	gets(s1); 
	printf("Chuoi: ");
	puts(s1);
	
	char s2[100]; //1 chuoi
	printf("Nhap ten: ");
//	scanf("%s", &string);
	gets(s2);
	printf("Chuoi: ");
	puts(s2);
	
	//copy s2 value to s1
	strcpy(s1, s2);
	puts(s1);
	strcat(s1, s2);
	puts(s1);
	printf("length of s1: %d\n", strlen(s1));
	
	if(strcmp(s1, s2) == 0){
		printf("s1 = s2");
	}else if(strcmp(s1, s2) < 0){
		printf("s1 < s2");
	}else if(strcmp(s1, s2) > 0){
		printf("s1 > s2");
	}
	
	printf("\n%p", strchr(s1, 'n'));
	printf("\n%p\n", strstr(s1, s2));
	
	int numbers2d[5][5];
	//numbers2d += 10
	int j, count;
	count = 0;
	//numbers2d[i][j]
	for(i = 0; i < 5; i++){
		for(j = 0; j < 10; j++){
			numbers2d[i][j] = count;
			count++;
		}
	}
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("number[%d][%d] = %d, ", i, j, numbers2d[i][j]);
		}
		printf("\n");
	}
} 
