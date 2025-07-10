#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct School{
	char name[100];
	int startYear; //first year of school for student
} School;

typedef struct Student{
	char name[100];
	int birthYear;
	char classroom[10];
	School school;
}Student; //struct declaration
//typedef struct Student Student;

void display(Student* student1){
	puts(student1->name);
	printf("%d\n", student1->birthYear);
	puts(student1->classroom);
	puts(student1->school.name);
	printf("%d\n", student1->school.startYear);
}

void input(Student *student1){
//	Student student1;
	puts("Enter name: ");
	fflush(stdin);
	fgets(student1->name, sizeof(student1->name), stdin);
	fflush(stdout);
	puts("Enter birthyear: ");
	fflush(stdin);
	scanf("%d", &student1->birthYear);
	fflush(stdout);
	puts("Enter classroom: ");
	fflush(stdin);
	fgets(student1->classroom, sizeof(student1->classroom), stdin);
	fflush(stdout);
	puts("Enter school name: ");
	fflush(stdin);
	fgets(student1->school.name, sizeof(student1->school.name), stdin);
	fflush(stdout);
	puts("Enter school start year: ");
	fflush(stdin);
	scanf("%d", &student1->school.startYear);
	fflush(stdout);
	
//	structsArgs(student1);
	
	Student student2;
//	memcpy(&student2, &student1, sizeof(Student));
//	structsArgs(student2);
}

void arrayAndPointersWithStructs(){
	Student student1;
//	basicStructs(student1);
	
	Student students[2]; //struct array declaration
	students[0].name; //struct array member call according to members
	
	//initialize all array members of students
	int i;
	for(i = 0; i < 2; i++){
		input(&students[i]);
	}
	for(i = 0; i < 2; i++){
		display(&students[i]);
	}
}

int main(int argc, char *argv[]) {
	//open file - call to file
	FILE *f = fopen("data.txt", "w+");
	FILE *fRead = fopen("data.txt", "r+");
	//write into file a char
	fputc('a', f);

	fputs("Hello!", f);	
	fclose(f);
	
	printf("File data: ");
	char x;
	while((x = fgetc(fRead)) != EOF){
		putchar(x);
	}
	fclose(fRead);
	
	return 0;
}

void bubbleSort()
{
	int i, j, temp, arr_num[5] = { 23, 90, 9, 25, 16};
	for(i=3;i>=0;i--) /* Tracks every pass */
	{
		for(j=4;j>=4-i;j--) /* Compares elements */
		{ 
			if(arr_num[j]<arr_num[j-1]){ 
				temp=arr_num[j];
				arr_num[j]=arr_num[j-1];
				arr_num[j-1]=temp;
			}
			printf("\nThe sorted array");
			for(i=0;i<5;i++){
				printf("\n%d", arr_num[i]);
			}
			getch();
		}
	}
} 

int g = 100; //global variable

void stringAndArrayManagement(){
	int arr[3];
	arrayManage(arr, 3);
	
	char str[10];
	puts("Enter string: ");
//	gets(str); //input - not safe - unpredictable
	fflush(stdin);
	fgets(str, sizeof(str), stdin);
	fflush(stdout);
//	puts(str); //output
	stringParam(str);
}

void arrayManage(int arr[], int num){
	int i;
	for(i = 0; i < num; i++){
		printf("Enter arr[%d]: ", i);
		scanf("%d", &arr[i]); //(arr + i)
		printf("arr[%d]: %d\n", i, *(arr + i)); //arr[i]
	}
}

void stringParam(char str[]){
	puts(str); //output
}

int functionReview(){
	int x = 8;
	printf("Function returns: %d\n", function(58, 5));//no no
	printf("Function returns: %d\n", g);
}

int function(int z, int y){ //formal parameters
	int x = 10; //local variable
	x = 10; 
	return x; //1 function only returns 1 value
}

int* swap(int* x, int* y){
	//...
	return x;
}
