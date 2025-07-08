#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	ex1();
char c[20];
  printf ("Nhap chuoi");
  gets (c);
  printf ("%s",c);
	return 0;
}

void ex1(){
	char source[24];
	fflush(stdin);
	printf("Input string 'source':");
	gets(source);
	fflush(stdout);
	
	int numOfChars;
	fflush(stdin);
	printf("Enter number of characters for string 'searching':");
	scanf("%d", &numOfChars);
	fflush(stdout);
	
	char searching[numOfChars];
	fflush(stdin);
	printf("Input string 'searching':");
	gets(searching);
	fflush(stdout);
	
	printf("search: %s\nsource: %s", searching, source); 
	
	int countSearching = 0; //dem so luong searching trung hoan toan trong source
	int countChar = 0; //dem so cac phan tu cua searching tung 
	//cai mot sao cho bang voi source
	int countSearch = 1; //tang tien tim vi tri phan tu source sau khi 
	//thoa man chu cai dau tien o vong if thu nhat
	int i, y;
	for(i = 0; i<24 ; i++){
		printf("\ninto for");
		if(source[i] == searching[0]){
			printf("\ninto if");
			countChar = 1;
			if(numOfChars == 1){
				countSearching++;
			}else{
				for(y = 1; y < numOfChars; y++){
					printf("\ninto for 2");
					if(searching[y] == source[i+countSearch]){
						printf("\ninto valid if 1");
						countSearch++;
						countChar++;
						if(countChar == numOfChars){
							printf("\ninto valid if count\n");
							countSearching++;
							countChar = 1;
						}
					}else{
						printf("\ninto invalid if 1\n");
						countSearch = 1;
						countChar = 1;
						break;
					}
				}
			}
		}
	}
	
	printf("\n%s appears %d times in %s", searching, countSearching, source);
}
