#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Teacher{
	char name[24];
};
typedef struct Teacher Teac;
struct Student{
	char name[24];
	int age;
	char classname[24];
	Teac teach;
};
typedef struct Student Stu; //

int main(int argc, char *argv[]) {
	structDefinitionAndUsage();
	return 0;
}

void structDefinitionAndUsage(){
	//khai bao co typedef
	Stu stu1, stu2;
	
	fflush(stdin);
	printf("Enter Student name:");
	gets(stu1.name);
	fflush(stdout);
	
	fflush(stdin);
	printf("Enter Student age:");
	scanf("%d", &stu1.age);
	fflush(stdout);
	
	fflush(stdin);
	printf("Enter Student class:");
	gets(stu1.classname);
	fflush(stdout);
	
	fflush(stdin);
	printf("Enter Student's Teacher:");
	gets(stu1.teach.name);
	fflush(stdout);
	
	printf("Name1: %s\n", stu1.name);
	printf("Age1: %d\n", stu1.age);
	printf("Class1: %s\n", stu1.classname);
	printf("Class1: %s\n", stu1.teach.name);
	
//	stu1 = {"minh", 16, "C1234G"};
//	struct Student stu2 = {"minh", 16, "C1234G"};

//	stu2 = stu1;
	memcpy(&stu2, &stu1, sizeof(struct Student));
	printf("Name2: %s\n", stu2.name);
	printf("Age2: %d\n", stu2.age);
	printf("Class2: %s\n", stu2.classname);
}
