#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ex = 10;
//	number(ex);
//	printf("\nex = %d", ex);
//	random();

	int a, b, c;
	a = b = c = 10;
	printf("a = %d, b = %d, c = %d\n",a,b,c);
	moreThan2(&a, &b, &c);
	printf("a = %d, b = %d, c = %d\n",a,b,c);
	return 0;
}

void moreThan2(int *A, int *B, int *C){
	printf("A = %p\n", A);
	printf("B = %p\n", B);
	
	if(A < B){
		printf("A is stored before B\n");
	}
	if(A > B){
		printf("A is stored after B\n");
	}
	if(A >= B){
		printf("A is stored after or same as B\n");
	}
	if(A <= B){
		printf("A is stored before or same as B\n");
	}
	if(A == B){
		printf("A is stored same as B\n");
	}
	if(A != B){
		printf("A is different from B\n");
	}
	if(A == NULL){
		printf("A is NULL\n");
	}
	
	*A = 100;
	*B = 200;
	*C = 3000;
	
	int var, *ptr_var;
	var = 500;
	ptr_var = &var;
	printf("ptr_var = %p\n", ptr_var);
	ptr_var++;
	printf("ptr_var = %p\n", ptr_var);
	ptr_var--;ptr_var--;
	printf("ptr_var = %p\n", ptr_var);
	ptr_var += 9;
	printf("ptr_var = %p\n", ptr_var);
	ptr_var -= 19;
	printf("ptr_var = %p\n", ptr_var);
//	++(*ptr_var) == var;
//	++*ptr_var //lay gia tri sau dchi ptr_var dang tro toi
}

void pointer(int *receive){
	int *ptr = receive;
	int r = *receive; //r = ex
	printf("Adress: %p\n",ptr);
	printf("Received Value: %d\n",r);
}

void number(int n){
	printf("\nIn number()");
	printf("\nn = %d", n);
	printNumberChanged(n);
}

void printNumberChanged(int m){
	printf("\nIn printNumberChanged()");
	m = m + 10;
	printf("\nm = %d", m);
}
