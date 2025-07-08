#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// arr[i] == *(ptr+i) : gia tri bien dc tro den
	// &arr[i] == (ptr+i) : dia chi bien dc tro den
	
//	int soPhanTu;
//	printf("Nhap so phan tu:");
//	scanf("%d", &soPhanTu);
	
//	int arr1[soPhanTu]; int arr2[soPhanTu];
//	copyAndPaste(&arr1, &arr2, soPhanTu);
//	//malloc
//	int *ptr_;
//	ptr_ = (int*)malloc(3*sizeof(int));
//	// ---
//	free(ptr_);

//	int i;
//	i=returnInt();
//	printf("i = %d", i);

	int *ptr_, i;
	ptr_ = (int*)calloc(3, sizeof(int));
	for(i=0;i<3;i++){
		printf("ptr+%d = %d\n", i, *(ptr_+i));
	}
	free(ptr_);
	return 0;
}

void copyAndPaste( int *ptr1, int *ptr2, int soPhanTu){
	int i;
	for(i=0; i<soPhanTu; i++){
		printf("Nhap phan tu thu %d:", i);
		scanf("%d", (ptr1+i));
		
		*(ptr2+i) = *(ptr1+i);
	}
	for(i=0; i<soPhanTu; i++){
		printf("phan tu thu %d cua ptr2: %d\n", i, *(ptr2+i));
	}
}

int returnInt(){
	return 10;
}
