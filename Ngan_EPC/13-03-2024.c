#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Result{
	float math;
	float physics;
	float chemistry;
};
struct Student{
	char name[25];
	char province[25];
	int birth_year;
	struct Result mark;
};
typedef struct Student student;
student *ptr;

void menu(){
	printf("+------------------------------------------------------------------+");
	printf("| STUDENT EXAM RESULT MANAGEMENT PROGRAM |							");
printf("+------------------------------------------------------------------+");
printf("|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |");
printf("+------------------------------------------------------------------+");
}

void menu2(){
	printf("Do you want to continue ?");
	printf("- Yes, I do. (press ‘y’, ‘Y’");
	printf("- No, I don’t. (press ‘n’, ‘N’");
	printf("- Please clear the screen ! (press ‘c’, ‘C’)");
}
int main(int argc, char *argv[]) {
//	ptr=(struct Student*)malloc(3*sizeof(struct Student));
	//menu 1
	do{
		menu();
		int n, tongSoHS;
		printf("Enter choice:");
		scanf("%d", &n);
		switch(n){
			case 1:
				//viet code cua yeu cau input
				printf("Input number of students:");
				scanf("%d", &tongSoHS);
				ptr=(student*)malloc(tongSoHS*sizeof(student));
				input(ptr, tongSoHS);
				break;
			case 2:
				sort(ptr, tongSoHS);
				break;
		}
		
		//menu 2
		menu2();
		char c;
		printf("Your choice:");
		scanf("%c", &c);
		switch(c){
			case 'y': case 'Y':
				printf("lap lai menu\n");
				break;
			case 'n': case 'N':
				break;
		}
	}while(c =='y' || c =='Y');
	
	
	return 0;
}

void input(student *s, int n){
	//con tro nay tro toi 3 o, moi o
	//to bang kich co cua loai du lieu struct Student
	int i;
	for(i = 0; i < n; i++){
		printf("input");
		fflush(stdin);
		gets((s+i)->name);
		fflush(stdout);
		
		printf("input");
		scanf("%d", (s+i)->birth_year);
		
		do{
			printf("input");
			scanf("%d", (s+i)->mark.math);
			if(*(s+i)->mark.math > 10 || *(s+i)->mark.math < 0){
				printf("Student mark of math must be between 0 and 10.");
			}
		}while(*(s+i)->mark.math > 10 || *(s+i)->mark.math < 0);
	}	
}

void sort(student *s, int n){
	int i, j, tongdiem1, tongdiem2;
	student *s;
	for(i=0; i<n; i++){
		for(j=1; j<n; j++){
			tongdiem1 = *(s+i)->mark.math + *(s+i)->mark.chemistry + *(s+i)->mark.physics;
			tongdiem1 = *(s+j)->mark.math + *(s+j)->mark.chemistry + *(s+j)->mark.physics;
			if(tongdiem2 > tongdiem1){
				s=(s+i);
				(s+i)=(s+j);
				(s+j)=s;
			}
		}
	}
	
	printf("| Student Name | Province | Birth Year | Math | Physics | Chemistry |\n");
	for(i=0; i<n; i++){
		printf("%s|%...", *(s+i)->name, ...);
	}
}
