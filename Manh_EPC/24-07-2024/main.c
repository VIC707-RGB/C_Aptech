#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct publisher{
	char namePub[24];
	int yearEstBook; //nam NSX phat hanh sach
};
typedef struct publisher Publisher;
struct book //tên cau truc du lieu 
{ 
	char name [25]; //thanh vien (member)
	char author [20];
	int editionNum;
	float price;
	Publisher NSX; //khai bao thanh vien co kieu du lieu la cau truc du lieu khac - 
};

typedef struct book Book;

int main(int argc, char *argv[]) {
	fileHandling();
	return 0;
}

void fileHandling(){
//	FILE *fpRead = fopen("text.txt", "r"); //fopen(): ham dung de mo file
	FILE *fpWrite = fopen("text.txt", "w");
	
	char data[100] = "Hello, world!";
	int resWrite = fwrite(data, sizeof(char), strlen(data), fpWrite);
//	int res = fread(data, sizeof(char), strlen(data), fpRead);
	printf("%d", resWrite);
	rewind(fpWrite);
	fclose(fpWrite);
}

void structure(){
	Book book1; //khai bao 1 bien su dung loai du lieu struct book
	Book book2 = {"Doraemon", "FF", 10, 7.99}; //vua khai bao vua gan gia tri
	Book aryBooks[7];
	aryBooks[3].editionNum = 1;
	aryBooks[3].NSX.yearEstBook = 2005;
	
	Book *ptr_Book1 = &book1;
	
//	book1 = 1;
	puts("Enter name of book1:");
	gets(book1.name);
	book1.editionNum = 1;
	book1.NSX.yearEstBook = 2004;
	pointerOutput(ptr_Book1);
//	output(book2);
	
	memcpy(&book2, &book1, sizeof(Book));
}

void pointerOutput(Book *b){
	printf("Name of book: %s\n", b->name);
	printf("Edition number book: %d\n", b->editionNum);
//	printf("Author of book: %s\n", b->author);
//	printf("Price of book: %f\n", b->price);
	printf("\n");
}

void output(Book b){
	printf("Name of book: %s\n", b.name);
	printf("Edition number book: %d\n", b.editionNum);
	printf("Author of book: %s\n", b.author);
	printf("Price of book: %f\n", b.price);
	printf("\n");
}
