#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	mang2chieu();
	return 0;
}

void mang2chieu(){
	int m, n;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	
	int ary[m][n];
	
	int i, j;
	int tongSoCacPtu = 0;
	for(i = 0; i<m; i++){
		for(j = 0; j < n; j++){
//			ary[i][j] = 1;
			tongSoCacPtu++;
		}
	}
	
	printf("Total number of members in array: %d", tongSoCacPtu);
}

void hoanDoi(){
	ary[4][4];
	
	//xd: dk: > 0 && < soHang
	printf("Enter hang 1: ");
	scanf("%d", &h1);
	printf("Enter hang 2: ");
	scanf("%d", &h2);
	
	int col, row, temp;
	for(col = 0; col < 4; col++){
		ary[h1][col] = temp;
		ary[h1][col] = ary[h2][col];
		ary[h2][col] = temp;
	}
}

int tong(){
	int a = 9;
	int b = 10;
	return a + b;
} 
