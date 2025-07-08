#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bai13();
	return 0;
}

void bai13(){
	int ary[10];
	int i, totalAppear, find;
	totalAppear = 0;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: ary[%d]: ", i);
		scanf("%d",&ary[i]);
	}
	
	//nhap vao so thu tu phan tu muon tim
	printf("\n\n Enter the index:");
	scanf("%d", &find);
	
//	ary[find];
	//so sanh phan tu do vs tat ca cac phan tu trong mang so nguyen
	for(i=0; i<10; i++){
		if(ary[find] == ary[i]){
//			printf("\n ary[%d] == ary[%d]", find, i);
			totalAppear++;
		}
	}
	
	printf("Total appearance of ary[%d]: %d", find, totalAppear);
}

void bai12(){
	int ary[10];
	int i, j, mid;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: ary[%d]: ", i);
		scanf("%d",&ary[i]);
	}
	
	// ve 1 (so sanh) ve 2
	for(i = 0; i < 10; i++){
		//ve 1
//		ary[i];
		for(j = 0; j < 10; j++){
			//ve 2
			if(ary[i] < ary[j]){
				mid = ary[i];
				ary[i] = ary[j];
				ary[j] = mid;
			}
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("\n value: ary[%d]: %d", i, ary[i]);
	}
}

void array(){
//	int n;
	int n[12]; //khai bao 1 mang
	
	n[0] = 10;
//	printf("n[0] = %d\n", n[0]);
//	printf("n[0] = %d\n", n[1]);
//	printf("n[0] = %d\n", n[2]);
//	n[1] = 11; n[2] = 9;
//	printf("n[0] = %d\n", n[1]);
//	printf("n[0] = %d\n", n[2]);
	
	int ary[10];
	int i, total, high;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: ary[%d]: ", i);
		scanf("%d",&ary[i]);
	}
	/* Displays highest of the entered values */
	high = ary[0]; //default
	for(i=1; i<10; i++)
	{
		if(ary[i] > high)
			high = ary[i];
	}
	printf("\nHighest value entered was %d", high);
	/* prints average of values entered for ary[10] */
	for(i=0,total=0; i<10; i++)
		total += ary[i];
	printf("\nThe average of the elements of ary is %d",total/i);
}

void switchCase(){
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("n = 1");
			break;
		case 2:
			printf("n = 2");
			break;
		case 3:
			printf("n = 3");
			break;
		case 4:
			printf("n = 4");
			break;
		case 5:
			printf("n = dofhds");
			break;
			
		default:
			printf("default");
			break;
	}
	
//	clrscr();
//	printf("cleared!");
}
