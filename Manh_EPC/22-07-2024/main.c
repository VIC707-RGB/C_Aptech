#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	pointer();
	return 0;
}

void pointer(){
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *n; //pointer n
	
	n = &ary[7]; //dia chi ptu thu 7
	n = ary+7; //cu phap dang con tro: dia chi ptu thu 7
	
	int *ptr_ary;
	ptr_ary = (int *)malloc(7 * sizeof(int));
	int i;
	for (i = 0; i < 7; i ++)
	{
		printf("i=%d, *(ary+i)=%d\n", i, *(ary + i));
		printf("ary+i=%p\n\n", ary+i);
	}
	
	
	free(ptr_ary);//giai phong bo nho
	
//	static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i;
//	for (i = 0; i < 10; i ++)
//	{
//		printf("i=%d, ary[i]=%d, *(ary+i)=%d\n", i, ary[i], *(ary + i));
//		printf("&ary[i]= %p, ary+i=%p\n\n", &ary[i], ary+i);
//	}
	
//	int *ptr[5];
}
