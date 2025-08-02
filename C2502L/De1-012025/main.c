#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//2.
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	//1.
	int *arr = (int *)malloc(n * sizeof(int)); //n: exact number ary[n]
	printf("Enter integers: \n");
	int i;
	for(i = 0; i < n; i++){
		printf("Enter integer number %d: ", i+1);
		scanf("%d", (arr + i));
	}
	
	//3.
	int j;
	for(i = 0; i < n - 1; i++){//1st var
	//NULL - 0
		for(j = 0; j < n - i - 1; j++){
			if(*(arr + j) > *(arr + j + 1)){
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
				
			}
			printf("(arr + %d) = %d\n", j, *(arr + j));
		}
		
	}
	
	//4.
	for(i = 0; i < n; i++){
		printf("(arr + %d) = %d\n", i, *(arr + i));
	}
	return 0;
}

void q4(){
	//1.
	int ary[3][3];
	printf("Enter 3x3 matrix:\n");
	int i, j;
	for(i = 0; i < 3; i++){ //1
		for(j = 0; j < 3; j++){ //2
			printf("Enter ary[%d][%d]: ", i, j);
			scanf("%d", &ary[i][j]);
		}
	}
	printf("\n");
	for(i = 0; i < 3; i++){ //1
		for(j = 0; j < 3; j++){ //2
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	
	//3.
	int sum = sumMatrix(ary);
	int max = findMax(ary);
	printf("\nSum of all elements: %d\n", sum);
	printf("Largest element: %d\n", max);
}

//2a
int sumMatrix(int m[3][3]){
	int sum = 0;
	int i, j;
	for(i = 0; i < 3; i++){ //1
		for(j = 0; j < 3; j++){ //2
			sum += m[i][j];
		}
	}
	return sum;
}

//2b
int findMax(int m[3][3]){
	int max = 0;
	int i, j;
	for(i = 0; i < 3; i++){ //1
		for(j = 0; j < 3; j++){ //2
			if(m[i][j] > max){
				max = m[i][j];
			}
		}
	}
	return max;
}

void q2(){
	//1.
	int ary[10];
	printf("Enter integers:\n");
	int i;
	for(i = 0; i < 10; i++){
		printf("Enter integer number %d: ", i);
		scanf("%d", &ary[i]);
	}
	
	//2. 
	int *p1 = ary; //old ary
	int *p2 = ary+9; //new ary
	
	//3. 
	printf("Original array:");
	for(i = 0; i < 10; i++){
		printf("ary[%d]: %d\n", i, ary[i]);
	}
	
	while(p1 < p2){
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++; //move on to next member
		p2--; //move on to last member
	}
	
	printf("Reversed array:");
	for(i = 0; i < 10; i++){
		printf("ary[%d]: %d\n", i, ary[i]);
	}
	
}
