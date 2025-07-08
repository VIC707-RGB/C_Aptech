#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	fun1(-2131);
bai1();
	return 0;
}

void bai1(){
	int n; int q = 0;
	printf("Input n:");
	scanf("%d", &n);
	int i;
	for(i = 0; i <= n/2; i++){
		if(i % 2 == 0){
			q += i;
		}
	}
	int n, m;
//	for(i = 0; n - m - i >= 1 ; i++){
//		//...
//	}
	
	while(n - m - i >= 1){
		//thuc hien phep cong don o day
	}
	int m;
	printf("Input m:");
	scanf("%d", &m);
	
	while(m == -1){
		//TH: co ki tu khac trc ki tu so hoac chi co ki tu khac
		printf("...");
	}
	
	//TH2: ki tu khac theo sau ki tu so
	char trailingChar;
	while ((trailingChar = getchar()) != '\n' && trailingChar != EOF){ //END OF FILE
		if(trailingChar != ' '){
			printf("Trailing char: %c", trailingChar);
		}
	}
	
//	printf("m = %d", m);
//	printf("\n m + n = %d", m + n);
}

void fun2(int n){
	if(n <= 100){
//		printf("%d",n);
	//th: so don vi
	if(n >= 0 && n <= 20){
		char *words[]={"Zero", "One", "two"};
		printf("%s", (words + n));
	}
	else{
			char *tens[]={"Twenty", "Thirty", "Forty"}; //hang chuc
			char *ones[]={ "One", "two"}; //hang don vi
			
			printf("%s %s", (tens+(n/10-2), (ones+(n%10-1))));
		}
	}
}
