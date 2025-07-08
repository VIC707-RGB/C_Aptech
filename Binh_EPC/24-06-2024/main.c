#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int a,b;
//	a = 1; b = 1;
//	printf("a = %d, b = %d\n",a,b);
//	returnInt(&a, &b); //su dung ham co tham so truyen vao
//	printf("a = %d, b = %d\n",a,b);

	allocatingMemory();
	return 0;
}

void allocatingMemory(){
	//quan li 1 to hop cac dia chi
	int *p, n, i, j, temp;
	printf("Enter number of elements in the array: ");
	scanf("%d", &n);
	
	p = (int *)malloc(n * sizeof(int)); // = (loai_bien_contro *)malloc(so_lg_phan_tu * kich_co_tung_phan_tu)
	
	for(i = 0; i < n; i++){
		printf("Enter element no %d: ", i);
		scanf("%d", (p+i));
	}
	
//	for(i = 0; i < 10; i++){
//		for(j = i+1; j < n; j++){
//			printf("numbers[%d] = %d\n", i, *(numbers+i));
//		}
//	}

	for(i = 0; i < n; i++){
		printf("p+%d = %p\n",i, (p+i));
		printf("*(p+%d) = %d\n\n",i, *(p+i));
	}
	
	free(p); //giai phong bo nho
	for(i = 0; i < n; i++){
		printf("p+%d = %p\n",i, (p+i));
		printf("*(p+%d) = %d\n\n",i, *(p+i));
	}
}

void pointerString(){
	char a, str[81], *ptr;
	printf("\nEnter a sentence:");
	gets(str); //ham gets() chi dung rieng cho string (char[])
	printf("\nEnter character to search for:");
	a = getche(); //getche() == getchar()
//	ptr = strchr(str,a);
	/* return pointer to char*/
	printf("\n String starts at address: %p",str); //%u: lay gia tri cua bat ki bien nao
	printf("\n First occurrence of the character is at address: %p ", ptr);
}

void pointerArray(){
	int numbers[10];
	numbers[7] = 7;
	//truy cap toi 1 phan tu trong mang - goi dia chi 1 phan tu trong mang
	//c1:
//	&numbers[7];
	//c2:
//	(numbers+7);
	printf("numbers[7] = %d\n", numbers[7]);
	printf("numbers[7] = %d\n", *(numbers+7));
	printf("dia chi numbers[7] = %p\n", &numbers[7]);
	printf("dia chi numbers[7] = %p\n", (numbers+7));
	
	int i;
	for(i = 0; i < 10; i++){
		*(numbers+i) = i;
	}
	
	for(i = 0; i < 10; i++){
		printf("numbers[%d] = %d\n", i, *(numbers+i));
	}
}

void pointerArth(){
	int var, *ptr_var;
	ptr_var = &var;
	var = 500;
	
	printf("dia chi cua var: %p\n", &var);
	printf("var == %d\n", var);
	
	printf("dia chi cua var: %p\n", ptr_var);
	printf("var == %d\n", *ptr_var);
	
	ptr_var++;
	
	printf("Sau tdoi:");
	printf("dia chi cua var: %p\n", &var);
	printf("var == %d\n", var);
	
	printf("dia chi cua var: %p\n", ptr_var);
	printf("var == %d\n", *ptr_var);
}

void returnInt(int* a, int* b){ //tham so (arguments): chua gia tri truyen vao de lam viec trong ham
	*a = 10;
	*b = 20;
}

void pointerBasics(){
	int i = 10;
	int* ptr_i;
//	scanf("%d", &i); // &i la dia chi cua i
	ptr_i = &i; // gia tri con tro ptr_i la dia chi cua bien i
	
	printf("i == %d\n", i);
	printf("dia chi cua i: %p\n", &i);
	
	printf("dia chi cua i: %p\n", ptr_i);
	printf("i == %d\n", *ptr_i);
}
