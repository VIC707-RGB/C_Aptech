#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//2d arrays
	int temp[4][3];
	// 0 0 0 0
	// 0 0 0 0
	// 0 0 0 0
	
	// [0][0] [1][0] 0 0
	// [0][1] 0 0 0
	// [0][2] 0 0 0
	
	int i,j; int num = 0;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			temp[i][j] = num;
			printf("temp[%d][%d] = %d\t",i,j,temp[i][j]);
			num++;
		}
		printf("\n");
	}
	
	return 0;
}

void strArray(){
	//string - character array
	char str[100];
//	scanf("%s", &str);
//	printf("%s", str);
	printf("Enter string 1: ");
	fgets(str, sizeof(str), stdin);
	puts(str);
//	printf("\nString: %s", str);
	
	char strg[100];
	printf("Enter string 2: ");
	fgets(strg, sizeof(strg), stdin);
	puts(strg);
	//strcmp
	if(strcmp(str,strg) < 0){
		printf("lhs appears before rhs in lexicographical order.");
	}else if(strcmp(str,strg) > 0){
		printf("lhs appears after rhs in lexicographical order.");
	}else{
		printf("lhs == rhs");
	}
	//strcat
	strcat(str, strg);
	puts(str); //hello\nworld\n\0
	//remove '\n' in string:
	int i, j = 0;
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] != '\n'){
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	puts(str);
	
	
	//strlen & sizeof
	printf("\n String length 1: %d", strlen(str));
	printf("\n String length 1: %d", sizeof(str));
	puts("\n");
	//strcpy
	strcpy(str, strg); 
	puts(str);
	puts(strg);
}

void arrayBasics(){
		int i;
	int arr[5]; // def array: data_type array_name[index]
	arr[0] = 10; //call to array element [0]
//	printf("arr[0] = %d\n", arr[0]);
//	printf("Enter arr[0]: ");
//	scanf("%d", &arr[0]);
//	printf("arr[0] = %d\n", arr[0]);

	//array handling
	//init
	for(i = 0; i < 5; i++){
//		arr[i] = 10;
		printf("Enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < 5; i++){
		printf("arr[%d] = %d\n",i, arr[i]);
	}
	
	int ary[5];
	ary[0] = 10;
//	ary = 10; //false
	
//	ary == arr //false
//	ary = arr //false
}
