#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	multidArrays();
	return 0;
}

void arrays(){
	//ten_mang[so_phan_tu] = {ten_mang[0], ten_mang[1],...ten_mang[so_phan_tu]
	int numbers[4]; //mang co 5 phan tu
	numbers[0] = 1;
	numbers[1] = 2;
	
	printf("Enter numbers[2]:");
	scanf("%d", &numbers[2]);
	
	printf("Result: numbers[2] = %d", numbers[2]);
	
	int i = numbers[2];
	printf("Result: i = %d", i);
}

void arrayHandling(){
	int ary[10];
	int i, total, high;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: %d : ", i);
		scanf("%d",&ary[i]);
	}
	/* Displays highest of the entered values */
	high = ary[0];
	for(i=1; i<10; i++)
	{
		if(ary[i] > high) high = ary[i];
	}
	printf("\nHighest value entered was %d", high);
	/* prints average of values entered for ary[10] */
	for(i=0,total=0; i<10; i++) total = total + ary[i];
		printf("\nThe average of the elements of ary is %d",total/10);
}

void stringHandling(){
	char name[24];
	char name2[24];
	printf("Enter name:");
//	scanf("%s", &name);
	gets(name);
//	printf("My name is: %s\n", name);
	int i;
//	for(i=0; i<24; i++){
//		printf("name[%d] = %d\n", i, name[i]);
//	}
	
	//string functions
	//strcpy(name2, name)
	strcpy(name2, name);
//	printf("Other name is: %s\n", name2);
	
	printf("Enter other name: ");
	gets(name2);
	//strcmp(s1,s2)
	if(strcmp(name, name2) == 0){
		printf("name = name2\n");
	}
	else if(strcmp(name, name2) > 0){
		printf("name > name2\n");
	}else if(strcmp(name, name2) < 0){
		printf("name < name2\n");
	}
	//strcat(name2, name)
	printf("concatenates: %s\n", strcat(name2, name));
	//strlen(s1)
	printf("length of name1: %d\n", strlen(name));
	
}

void multidArrays(){
	int temp[4][3];
	int x, y;
	int i = 0;
	for(x=0; x<4; x++){
		for(y=0; y<3; y++){
			temp[x][y] = i;
			i++;
		}
	}
	for(x=0; x<4; x++){
		for(y=0; y<3; y++){
			printf("temp[%d][%d] = %d\n", x, y, temp[x][y]);
		}
	}
}
