#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int state = 101;
int main(int argc, char *argv[]) {
//	do{
//		strings();
//	}while(1 == 1);

	int a,b;
	a=getA();
	b=getB();
	printf("function returns: %d\n",functionEx(a,b)); //hanh dong dua vao ham gia tri
	printf("state returns: %d\n",state); 
	return 0;
}

int getA(){
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	return a;
}

int getB(){
	int b;
	printf("Nhap b: ");
	scanf("%d", &b);
	return b;
}
int functionEx(int x, int y){ //int x, int y la cac tham so cua ham
//tham so: nhan gia tri dua vao trong ham
//trong ham thi tham so dc coi nhu la da khai bao va co gia tri
	return x*y;
}

void strings(){
	//khai bao 1 chuoi
	char name[20]; //20: chuoi nay chi chua max toi 20
	char name2[20];
	
	//I/O chuan cua viec nhap/xuat chuoi
	puts("Enter name 1: ");
	gets(name);
	puts("Enter name 2: ");
	gets(name2);
//	puts("Name:");
//	puts(name);
	
	//strcat: noi chuoi name voi name2, tra ve name
	puts(strcat(name, name2));
	//strcmp: so sanh chuoi name voi name2, tra ve true/false
	if(strcmp(name, name2) < 0){
		puts("name < name2");
	}else if(strcmp(name, name2) == 0){
		puts("name = name2");
	}else if(strcmp(name, name2) > 0){
		puts("name > name2");
	}
	//strchr: tim vi tri chu cai trong chuoi, tra ve con tro/NULL
	printf("%p\n",strchr(name, 'l')); //pointer
	//strcpy: copy name2 sang name, tra ve name
	puts(strcpy(name,name2));
	//strcpy: copy name2 sang name, tra ve name
	printf("Length of String: %d\n", strlen(name));
	
	//I/O chuan cua viec nhap/xuat chuoi
//	printf("Name: ");
//	scanf("%s", &name);
//	printf("Name: %s", name);
}

void arrays(){
	int ary[4]; //mang 1 chieu
	int ary2D[3][2]; //mang 2 chieu
	
	//init 2D ary
	int i, j;
	int init = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			ary2D[i][j] = init;
			printf("init = %d\n",init);
			init++;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("2Dary[%d][%d] = %d ",i,j,ary2D[i][j]);
			if(j == 1){
				printf("\n");
			}
		}
	}
}
