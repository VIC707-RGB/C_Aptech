#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int age = 20;
int main(int argc, char *argv[]) {
	
//	int n = sayHello();
//	printf("\nEnter n: ");
//	scanf("%d", &n);
//	
//	int y = ask(n);
//	printf("\nn = y = %d", y);
//	printf("\nage = %d", age);
	
	string();
	return 0;
}

void string(){
	char str[10], str2[10];
	printf("Enter name:");
	gets(str);
	printf("Enter name 2:");
	gets(str2);
	
	printf("\n%s", strcat(str, str2));
	if(strcmp(str, str2) < 0){
		printf("\nstr1 < str2");
	}else if(strcmp(str, str2) > 0){
		printf("\nstr1 > str2");
	}else if(strcmp(str, str2) == 0){
		printf("\nstr1 = str2");
	}
	printf("\nafter copy:", strcpy(str, str2));
	printf("\nstr1: %s", str);
	printf("\nstr1 length: %d", strlen(str));
}

static int sayHello(int n){
	printf("\nHello world!");
	return n;
}

int ask(int n){
	printf("\nHow are you feeling?");
	return sayHello(n);
}
