#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Subjects{
	float Maths;
	float English;
	float Literature;
}Subjects;

struct Student{
	char name[24];
	int age;
	char classroom[24];
	struct Subjects marks;
}Student;

void structBasics(){
	struct Student student1;
	student1.age = 18;
	student1.marks.English = 10;
	printf("Enter name: ");
	gets(student1.name);
	printf("Enter class: ");
	gets(student1.classroom);
	
//	struct Student student1 = {"Abraham", 20, "A1345G7"};

	
	printf("Student name: %s\n", student1.name);
	printf("Student age: %d\n", student1.age);
	printf("Student classroom: %s\n", student1.classroom);
}

void memcpyEx(struct Student student1, struct Student student2){
	memcpy (&student2, &student1, sizeof(struct Student));
}

void fileBasics(){ //text file
	FILE *fp = fopen("./text.txt", "w"); //fopen( "link/file", "mode");
	FILE *fp2 = fopen("./text.txt", "r");
//	fgetc(fp);
	char data[100] = "Hello, world!"; 
//	char data[100];
	int i = fwrite(data, sizeof(char), strlen(data), fp);
	rewind(fp);
	int result = fread(data, sizeof(char), strlen(data), fp2);
	rewind(fp);
	ferror(fp2);
	printf("%d", result);
	
	fclose(fp);
	fclose(fp2);
}

int main(int argc, char *argv[]) {
	fileBasics();
	return 0;
}
