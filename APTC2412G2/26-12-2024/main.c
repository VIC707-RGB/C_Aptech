#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n;
	printf("Enter n: ");
	scanf("%d", &n);
	int tong = 0;
	for(i = 1; i <= n; i++){ // di qua toan bo cav so tu 1 - n
		if(i % 2 == 0){ //kiem tra so chan
			tong = tong + i; // cong don
		}
	} // => da tinh xong tong cac so chan
	printf("%d", tong);
	return 0;
}
void loop(){
	int a, b, c;
	a = 100;
//	printf("Enter a: ");
//	scanf("%d", &a);
//	printf("Enter b: ");
//	scanf("%d", &b);
//	printf("Enter c: ");
//	scanf("%d", &c);

	int i, j;
//	for(i = 0, j = 10; i < 5, j > 1; i++, j--){ // ||
//		printf("Lan lap %d\n", i);
//		printf("Lan lap %d\n", j);
//		printf("\n");
//	}
	for(i = 1; i <= 10; i++){ // ||
		printf("Lan lap %d\n", i);
//		printf("\n");
//		for(j = 10; j > 1; j--){
//			printf("Lan lap %d\n", j);
//		}
		printf("\n");
	}
	while(a == 10){
		printf("while loop\n");
		printf("Enter a: ");
		scanf("%d", &a);
	}
	
	do{
		printf("do-while loop\n");
		printf("Enter a: ");
		scanf("%d", &a);
	}while(a == 10);
} 

void condition(){
	int a, b, c;
//	printf("Enter a: ");
//	scanf("%d", &a);
//	printf("Enter b: ");
//	scanf("%d", &b);
//	printf("Enter c: ");
//	scanf("%d", &c);
	
	//dúng: true
	//sai: false 
	//if-else-if: xet dieu kien rieng -> ket qua chi can 1
	if(a > b){
		printf("success\n");
	}else if(a < c){
		printf("success\n");
	}else{
		printf("success\n");
	}
	//multi if: tach rieng cac dieu kien va gan cac lenh cu the cho dieu kien do rieng
	if(a > b){
		printf("a > b\n");
	}
	if(a < c){
		printf("a < c\n");
	}
	if(a == b){
		printf("a = b\n");
	}
	//nested if
//	if(a > b){
//		printf("if statement 1");
//		if(a != b){
//			printf("\nif statement 2");
//			if(a == c){
//				printf("\nif statement 3");
//			}
//			if(a != c){
//				printf("\nif statement 4");
//			}
//		}
//		if(b != c){
//			printf("\nif statement 5");
//		}
//	}
	
	switch(a){
		case 1:
			printf("a = 1");
			break;
		case 2: 
			printf("a = 2");
			break;
		case 3:
			printf("a = 3");
			break;
		default:
//			printf("gia tri cua a hien tai: %d", a);
			break;
	}
	
	char ch;
	ch = getchar();
	
	switch (ch) //
	{
		case 'a' : 
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("\nCharacter is a vowel");
			break;
		case 'z' :
			printf ("\nLast Alphabet (z) was entered");
			break;
		default :
			printf("\nCharacter is a consonant");
			break;
	}
}

void io(){
	int a, b;
	a = 5;
	b = 10;
	printf("a = %d, b = %d\n", a, b); 
	int c;
	c = a; //c = 5
	a = b; //a = 10
	b = c; //b = 5
	printf("a = %d, b = %d\n", a, b); 
	
	int x = 20;
	printf("control string: %d\n", x);
	
	printf("Enter x: ");
//	scanf("%d", &x);
	printf("control string: %d\n", x);
	
//	char c;
	printf("Enter c: ");
//	c = getchar();
//	printf("Result: ");
//	putchar('7');
//	putchar(c);
} 

void op1(){
	int i = 10; // = 
	int a,b,c;
	a = b = c = 10;
	printf("a = %d, b = %d, c = %d, \n",a,b,c);
	printf("a/b = %d\n", a/b);
	printf("a%%b = %d\n", a%b);
	//+1
	printf("++a = %d\n", ++a);
	//-1
	printf("--b = %d\n", --b);
	
	if(a > b || a-2*3 != b && a == b){ 
	//&&
	// ||
		printf("a >= b\n");
	}
	
	float y, z;
	y = 92.29;
	z = (int) y;
	printf("z = %f\n", z);
	
//	int result = --z % --a^2 * --(b + c);
}

void chuaBT2(){
	// a. Good day!
    printf("Good day!\n");

    // b. Good /\\ day!
    // (Use '\\' to print the backslash character)
    printf("Good /\\ day!\n");

    // c. He shared his "wisdom" with me
    // (Use '\"' to print double quotes)
    printf("He shared his \"wisdom\" with me\n");
    // \" \"

    // d. Hello
    //    world! (using a single printf statement)
    printf("Hello\n\tworld!\n");

    // e. Hello\nworld! (no blank spaces in printf)
    printf("Hello\n\tworld!\n");
    // \t

    // f. How are you?
    //    I am OK. (using a single printf)
    printf("How   are   you?\nI   am   OK.\n");

    // g. How are you? I am OK. (using two printf statements)
    printf("How\tare\tyou?\n");
    printf("I\tam\tOK.\n");

    // h. How are you? I am OK. (using a single printf with no spaces)
    printf("How are you?\nI am OK.\n");

    // i. Something has gone crazy (with a beep sound)
    // (Use '\a' to produce a beep sound)
    printf("Something has gone crazy\a\n");
    // \a

    // j. Bank interest is 10%% in the year 2001.
    // (Use '%%' to print the '%' character)
    printf("Bank interest is 10%% in the year 2001.\n");
    // %%
}
