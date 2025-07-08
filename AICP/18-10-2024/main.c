#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	menu();
	return 0;
}

void printFib(int n) {
  
      // If the number of terms is smaller than 1
    if (n < 1) {
        printf("Invalid Number of terms\n");
        return;
    }
  
      // First two terms of the series
    int prev1 = 1;
    int prev2 = 0;

    // for loop that prints n terms of fibonacci series
    for (int i = 1; i <= n; i++) {
          
          // Print current term and update previous terms
        if (i > 2) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);
        }
        else if (i == 1)
            printf("%d ", prev2);
        else (i == 2)
            printf("%d ", prev1);
    }
} 

void menu(){
	printf("Nh?p thông tin chi ti?t các khóa h?c. \nS?p x?p và hi?n th? thông tin chi ti?t các khóa h?c. \nThoát chuong trình.\n\n");
	int choice;
	printf("Enter choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Nh?p thông tin chi ti?t các khóa h?c.");
			break;
		case 2:
			printf("S?p x?p và hi?n th? thông tin chi ti?t các khóa h?c.");
			break;
		case 3:
			printf("Thoát chuong trình.");
			break;
		default:
			printf("invalid");
			break;
	}
}

struct chuoi{
	char arr[23];
};

void bai1(){
	int N; int i, j;
	printf("Enter N: ");
	scanf("%d", &N);
//	char arr[23];gets(arr);
//	puts(arr);
	struct chuoi strings[N];
	struct chuoi str; //bien trung gian
	
	for(i = 0; i < N; i++){
		fflush(stdin);
		printf("Chuoi [%d]: ", i);
		gets(strings[i].arr);
		fflush(stdout);
	}
	
	for(i = 0; i < N; i++){
		printf("Chuoi [%d]: ", i);
		puts(strings[i].arr);
	}
	
	for(i = 0; i < N; i++){
		for(j = i; j < N; j++){
				
//			if(strings[i].arr[0] < strings[j].arr[0]){
				fflush(stdin);
				printf("strings[i].arr[0] = %c, strings[i].arr[0] = %c\n",strings[i].arr[0], strings[j].arr[0]);
				strcpy(str.arr, strings[i].arr);
				strcpy(strings[i].arr, strings[j].arr);
				strcpy(strings[j].arr, str.arr);
				fflush(stdout);
			}
		}
	}
	
	printf("\n Sau khi sap xep");
	for(i = 0; i < N; i++){
		printf("Chuoi [%d]: ", i);
		puts(strings[i].arr);
	}
}
