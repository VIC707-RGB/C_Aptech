#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bai1();
	return 0;
}

void bai1(){
	int mang[10];
	
	int i;
	for(i = 0; i <= 9; i++){
		printf("Nhap so mang[%d]: ", i);
		scanf("%d", &mang[i]);
	}
	
	int highest, lowest;
	highest = mang[0]; lowest = mang[0];
	for(i = 0; i <= 9; i++){
		if(highest < mang[i]){
			highest = mang[i];
		}
		if(lowest > mang[i]){
			lowest = mang[i];
		}
	}
	printf("So lon nhat: %d, So be nhat: %d", highest, lowest);
}

void arrays(){
	int books[12];
	books[0] = 1;
	books[1] = 2;
	
	int ary[10];
	int i, total, high;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: %d : ", i+1);
		scanf("%d",&ary[i]);
	}
	/* Displays highest of the entered values */
	high = ary[0];
	for(i=1; i<10; i++)
	{
		if(ary[i] > high)
			high = ary[i];
	}
	printf("\nHighest value entered was %d", high);
	/* prints average of values entered for ary[10] */
	for(i=0,total=0; i<10; i++){
		total = total + ary[i];
	}
	printf("\nThe average of the elements of ary is %d",total/10);
}

void forloop(){
	int i = 0;
	for(i = 0; i < 10; i++){
		printf("%d\n", i);
	}
	int y;
	for(i = 0, y = 10; i < y; i++, y--){
		printf("%d < %d\n", i, y);
	}
	for(i = 0; i < 10; i++){
		printf("lan i = %d\n", i);
		for(y = 1; i > y; y++){
			printf("%d < %d\n", i, y);
		}
	}
}

whiledowhileloop(){
	int i = 10;
	while(i != 10){
		printf("i != 0\n");
		i--;
	}
	
	do{
		printf("i != 0\n");
		i--;
	}while(i != 10);
}
