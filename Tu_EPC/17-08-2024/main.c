#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	strings();
	return 0;
}

void strings(){
	char string[24];
	char string2[24];
//	string[0] = 'a';
//	printf("%c", string[0]);
	
	puts("Enter string 1:");
	gets(string); //ham nhap vao mang
	puts("Enter string 2:");
	gets(string2); //ham nhap vao mang
	
	puts(strcat(string, string2)); //noi 2 chuoi vs nhau
	printf("%d\n", strcmp(string, string2));
	if(strcmp(string, string2) < 0){
		puts("str1 < str2");
	}else if(strcmp(string, string2) == 0){
		puts("str1 = str2");
	}else{
		puts("str1 > str2");
	}
	printf("%p\n", strchr(string, 'a'));
	puts(strcpy(string, string2));
	printf("strlen: %d\n", strlen(string));
}

void arrays(){
	int i, j; i = 0; j = 1;
	
	int numbers[7]; 
	numbers[0] = 1;
	numbers[1] = 2;
	
	int numbers2[2];
	numbers[0] = numbers2[0];
	
	for(i = 0; i < 7; i++){
		printf("Enter a random number: ");
		scanf("%d", &numbers[i]);
	}
	for(i = 0; i < 7; i++){
		printf("Numbers[%d]: %d\n", i, numbers[i]);
	}
	
	//math: find highest number
	int highest = 0; //so lon nhat
	for(i = 0; i < 7; i++){
		if(highest < numbers[i]){
			highest = numbers[i];
		}
	}
	printf("Highest number: %d", highest);
}
