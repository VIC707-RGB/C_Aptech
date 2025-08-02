#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	printf("MENU\n");
	printf("1. Enter & display character\n");
	printf("2. Examine even or odd number\n");
	printf("3. Exit");
}

int main(int argc, char *argv[]) {
	//8
	int a,b,c;
	//scanf()
	
	//real triangle
	if(a+b > c && b+c > a && a+c > b){
		if(a == b || b == c || c == a){
			if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
				//vuong can
			}
		}else if(a == b && b == c){
			//deu
		}else{
			//thuong
		}
	}else{
		//k ph tgiac
	}
	
	
	//10 
	int year, month;
	//scanf()
	switch(month){
		case 1: case 3: case 5: //...
			//31 days
		case 4: case 6: case 9: 
			//30 days
		case 2:
			//year
			if(year % 400 == 0){
				//2: 29 ngày 
			}else if(year % 4 == 0 && year % 100 != 0){
				//2: 29 ngày 
			}else{
				//2: 28 	
			}
		defa
	}
	return 0;
	
}

void conditionals(){
	//	To find whether a number is even or odd we proceed as follows :
//1. Accept a number
//2. Find the remainder by dividing the number by 2
//3. If the remainder is zero, the number is “EVEN”
//4. Or if the remainder is not zero the number is “ODD”
//5. Number 0

	//switch
	//decision-maker
	char c; int n;
	menu();
	int choice;
	printf("\nEnter choice (1,2,3): ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Enter character: ");
			fflush(stdin);
			scanf("%c", &c);
			fflush(stdout);
			printf("Character: %c", c);
			break;
		case 2:
			//1.
			printf("Enter n: ");
			scanf("%d", &n);
			//2.
			int d = n % 2; //remainder
			//nested-if:
			if(d == 0) printf("EVEN\n");
			if(d == 0){
				if(n == 0) printf("Number 0\n");
			}
			if (d != 0) printf("ODD\n");
			break;
		case 3:
			break;
		default:
			printf("Invalid input.");
			break;
	}
	
	//if, if-else, if-else-if
//	if(n != 0 && d == 0){
//		printf("EVEN\n");
//	}
//	else if(d == 0 && n == 0){ //else: connect between conditional statements
//	//if an if statement is true -> execute that if block, and no other
//		printf("Number 0\n");
//	}
//	else{ //other conditions
//		printf("ODD\n");
//	}
	
	//multi-if: many if statements - evaluates seperately
//	if(d == 0){
//		printf("EVEN\n");
//	}
//	if(d == 0 && n == 0){
//		printf("Number 0\n");
//	}
//	if (d != 0){ //other conditions
//		printf("ODD\n");
//	}
	
} 
