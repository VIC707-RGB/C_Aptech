#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct teacher{
	char teacherName[24];
};

struct student{
	char name[24];
	char classroom[24];
	int mark;
	struct teacher teacher;
};
typedef struct student Student;

int main(int argc, char *argv[]) {
	structsWithPointers();
	return 0;
}

void structsWithPointers(){
	Student *stu;
	
	stu = (Student*)malloc(1*sizeof(Student));
	
	printf("Enter student name:");
	fflush(stdin);
	gets((stu+0)->name);
	fflush(stdout);
	
	printf("Enter student's teacher name:");
	fflush(stdin);
	gets((stu+0)->teacher.teacherName);
	fflush(stdout);
	
	printf("%u, %u", *(stu+0)->name, *(stu+0)->teacher.teacherName);
//	free(stu);
}

void selectionSort(int arr[], int size) {
	int i, j;
    for (i = 0; i < size - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void basicsStructs(){
	Student hocsinh1[3]; //khai bao kieu du lieu struct
//	Student hocsinh2;
	int j=182361;
	hocsinh1[0].mark = j;
//	hocsinh2.classroom
	Student hocsinh2 = {"Trang", "A1808G", 8}; //chi ap dung dc vs vc khai bao cung 1 luc
	Student hocsinh3 = {"Man", "C2008G", 8}; //chi ap dung dc vs vc khai bao cung 1 luc
	printf("Enter student name:");
	fflush(stdin);
	gets(&hocsinh2.teacher.teacherName);
	fflush(stdout);
	memcpy(&hocsinh2, &hocsinh3, sizeof(Student));
	printf("%s, %s, %d\n", hocsinh2.name, hocsinh2.classroom, hocsinh2.mark);
	printf("%s, %s, %d", hocsinh3.name, hocsinh3.classroom, hocsinh3.mark);
}
