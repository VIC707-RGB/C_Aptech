#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b; //2 integers
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	int tem;
	tem = a;
	a = b;
	b = tem;
	printf("After swap: a = %d, b = %d", a, b);
	
	return 0;
}

bai5Lesson2(){
	//1.  nh?p vào m?t s? nguyên có 4 ch? s?.
	int num;
	printf("Enter a number that has 4 numbers: ");
	scanf("%d", &num);
	
	//2. Hãy t?o ra m?t s? m?i b?ng cách d?o ngu?c th? t? các ch? s? c?a s? ban d?u
	//abcd = a * 1000 + b * 100 + c * 10 + d
	// % - get remainder
	//abcd / 10 remain d
	
	int divi; // so thuong
	int remainder; // so du
	int result; // ket qua
	
	//abcd / 10 => abc du d
	remainder = num % 10; // so du = d
	divi = num / 10; // so thuong = abc
	result = remainder * 1000; // d * 1000
	printf("Remainder: %d, Divi: %d, Result(current): %d\n", remainder, divi, result);
	
	//abc / 10 => ab du c
	remainder = divi % 10; // so du = c
	divi = divi / 10; // so thuong = ab
	//assignment operator 
	result += remainder * 100; // d * 1000 + c * 100
	printf("Remainder: %d, Divi: %d, Result(current): %d\n", remainder, divi, result);
	
	//ab / 10 => a du b
	remainder = divi % 10; // so du = b
	divi = divi / 10; // so thuong = a
	//assignment operator 
	result += remainder * 10 + divi; // d * 1000 + c * 100
	printf("Remainder: %d, Divi: %d, Result(current): %d\n", remainder, divi, result);
	
	printf("\nReversed Number: %d", result);
}

bai3Lesson3BTVN(){
	//2. Yêu c?u ngu?i dùng nh?p m?t trong các toán t? sau: +, -, *, /
	char oper; //operator
	printf("Enter operator: ");
//	scanf("%c", &oper);
	oper = getchar();
	
	//1. Yêu c?u ngu?i dùng nh?p vào hai s? th?c.
	float a, b; //2 floats
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	
	//3. S? d?ng câu l?nh switch d?a trên toán t? ngu?i dùng nh?p d? th?c hi?n phép tính tuong ?ng và in ra k?t qu?.
	switch(oper){
		case '+':
			printf("a + b = %f\n", a+b);
			break;
		case '-':
			printf("a - b = %f\n", a-b);
			break;
		case '*':
			printf("a * b = %f\n", a*b);
			break;
		case '/':
			//4.  ki?m tra n?u s? chia b?ng 0 thì thông báo l?i
			if(b == 0){
				printf("Error: Cannot divide by 0");
			}else{
				printf("a / b = %f\n", a/b);
			}
			break;
	}
}
