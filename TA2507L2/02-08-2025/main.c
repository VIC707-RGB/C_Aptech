#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pointers
	//declaration
	int *p, *p2; //data_type * pointer_name
	int n;
	
	p = &n; //&: returns variable's address
	*p = 10; //*: returns variable's address's value
	p2 = p;
	
	printf("n: %d\n", n);
	printf("&n: %p\n", &n);
	//pointer's use: access indirectly
	//var
	printf("n: %d\n", *p);
	printf("&n: %p\n", p);
	
	// ++, --
	//points to next address:
	p2 = ++p;
	printf("next address: %p\n", p2);
	//points to the address before:
	p2 = --p;
	printf("the address before: %p\n", p2);
	//points to the address after i*sizeof(data_type) bytes
	p2 = p2 + 3;
	printf("next address: %p\n", p2);
	//points to the address before i*sizeof(data_type) bytes
	p2 = p2 - 3;
	printf("the address before: %p\n", p2);
	//adds value to 
	++*p2; (*p2)++; //n = 10, n++ -> n = 11
	*p2 = *p2 + 3; //same w all arithmetic operators
	printf("n: %d\n", *p2);
	//take the value next/before current address
	printf("p2: %p\n", p2);
	*p2++ += 1; //next address after n -> takes value in that address, value ++ -> new value + 1
	//does not work if the next address is not allocated
	//use for arrays 
	p2--;
	printf("p2: %p\n", p2);
	printf("next address's value: %d\n", *p2);
	printf("next address's value: %d", n);
	
	//pointer comparisons:
	printf("\n\n");
	p2 += 3;
	printf("p: %p\n", p);
	printf("p2: %p\n", p2);
	if(p < p2){
		printf("\np is stored before p2");
	}
	if(p2 > p){
		printf("\np2 is stored after p");
	}
	if(p == &n){
//		printf("\np points to the same data as p");
		printf("\np points to int n");
	}
	if(p != p2){
		printf("\np2 and p points to different data items but of same type");
	}
//	if(p2 == NULL){
//		printf("\np2 is pointing to NULL");
//	}
	return 0;
}

void p3b4(){
	int m, n;
	//input index for matrix a[m][n]
		printf("Enter m: ");
		scanf("%d", &m);
		printf("Enter n: ");
		scanf("%d", &n);
	
	int a[m][n], i, j;
	//input data to matrix:
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("Enter a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//find largest member in matrix
	int max, mBig, nBig; //biggest data + place in matrix
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(a[i][j] > max){
				max = a[i][j];
				mBig = i;
				nBig = j;
			}
		}
	}
	printf("\nBiggest member: a[%d][%d] = %d", mBig, nBig, max);
}

void p3b3(){
	int m, n;
	//input index for matrix a[m][n]
	do{
		printf("Enter m: ");
		scanf("%d", &m);
		printf("Enter n: ");
		scanf("%d", &n);
		if(m != n){
			printf("not a square matrix, try again. \n");
		}
	}while(m != n);
	
	int a[m][n], i, j;
	//input data to matrix:
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("Enter a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//sum above & below 
	int above, below;
	above = below = 0;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(i == j){
				continue;
			}else if(i < j){
				above += a[i][j];
			}else if(i > j){
				below += a[i][j];
			}
		}
	}
	printf("Sum all members above: %d\n", above);
	printf("Sum all members below: %d\n", below);
}

void p3b1(){
	int m, n;
	//input index for matrix a[m][n]
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	
	int a[m][n], i, j;
	//input data to matrix:
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("Enter a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//get row with biggest sum value
	int max = 0; //biggest sum value
	int row = 0; //row with biggest sum value
	for(i = 0; i < m; i++){ //if m is row
		int sum = 0;
		for(j = 0; j < n; j++){
			sum += a[i][j];
			if(sum > max){
				max = sum;
				row = i;
			}
		}
	}
	printf("\n[m] row with biggest sum value: %d", row);
	
	for(i = 0; i < n; i++){ //if n is row
		int sum = 0;
		for(j = 0; j < m; j++){
			sum += a[i][j];
			if(sum > max){
				max = sum;
				row = i;
			}
		}
	}
	printf("\n[n] row with biggest sum value: %d", row);
}

void b4(){
	char s[100]; 
	//input string:
	printf("input string:");
	fgets(s, sizeof(s), stdin);
	
	int i;
	int lengthOfWord = 0;
	int count = 0; //count words that has > 3 letters
	for(i = 0; i < strlen(s); i++){
		if(s[i] != ' ' && s[i] != '\0' && s[i] != '\n'){ //separate each word 
			lengthOfWord++; //count length of each word
		}else{ //each final evaluation of words
			if(lengthOfWord > 3){
				count++;
				lengthOfWord = 0; //re-assign for next word counted
			}
			lengthOfWord = 0;
		}
	}
	
	printf("Words that has > 3 letters: %d word(s)", count);
}

void b3(){
	int n, i, j; //number of data wanted
	
	//input numbers
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int arr[n]; //input array
	//input loop
	for(i = 0; i < n; i++){
		printf("Enter number[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	//separate loop
	int even[100], odd[100]; //separate even & odd numbers
	int e, o; //index of next member able to store number
	e = o = 0; //multi-assignment
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			even[e] = arr[i];
			e++;
		}else{
			odd[o] = arr[i];
			o++;
		}
	}
	
	//sort even ascending - for loop
	for(i = 0; i < e - 1; i++){
		for(j = i + 1; j < e; j++){
			if(even[i] > even[j]){
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}
	
	//sort odd descending - for loop
	for(i = 0; i < o - 1; i++){
		for(j = i + 1; j < o; j++){
			if(odd[i] < odd[j]){
				int temp = odd[i];
				odd[i] = odd[j];
				odd[j] = temp;
			}
		}
	}
	
	printf("\nAfter sorting array: \n");
	printf("Even: ");
	for(i = 0; i < e; i++){
		printf("%d ",even[i]);
	}
	printf("\nOdd: ");
	for(i = 0; i < o; i++){
		printf("%d ",odd[i]);
	}
} 
