#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//session8
int main(int argc, char *argv[]) {
	int num;
	fflush(stdin);
	printf("Input number of characters in string:");
	scanf("%d", &num);
	fflush(stdout);
	
	fflush(stdin);
	char string[num];
	printf("Input string: ");
	gets(string);
	fflush(stdout);
	
	findStringLength(&string);
	return 0;
}

void findStringLength(char *str){
	int count;
	do{
		
	}while(*str);
}

void inputSession8(){
	int num;
	fflush(stdin);
	printf("Input number of characters in string:");
	scanf("%d", &num);
	fflush(stdout);
	
	fflush(stdin);
	char string[num];
	printf("Input string: ");
	gets(string);
	fflush(stdout);
	
	input7(string, num);
}

void input72(char s[], int num){
	int pos,n;
	do{
		printf("Enter pos: ");
		scanf("%d", &pos);
	}while(pos > num);
	printf("Enter n characters: ");
	scanf("%d", &n);
	
	printf("Test String <%s>\n\nResult:\n",s);
	printf(" Left String <%s>\n",LEFT(s,pos,n));
//	  printf("  Mid String <%s>\n",MID(s,5,7));
	printf("Right String <%s>\n",RIGHT(s,pos,n));
}

void input7(char string[], int num){
	int i, j;
	int pos, n;
	char nKiTuBD[num]; char nKiTuKT[num]; //init
	do{
		printf("Enter pos: ");
		scanf("%d", &pos);
	}while(pos > num);
	printf("Enter n characters: ");
	scanf("%d", &n);
	
	//chuoi ki tu bat dau:
	nKiTuBD[n];
	int count=0;
	for(i = pos, j=0; i < num-pos; i++,j++){
		nKiTuBD[j]=string[i];
//		printf("\nstring %c", string[i]);
//		printf("\n%c", nKiTuBD[j]);
		count++;
		if(count == n){
			break;
		}
	}
	printf("chuoi ki tu bat dau: %s", nKiTuBD);
	
	//chuoi ki tu ket thuc
	nKiTuKT[n];
	for(i = num-n, j=0; i < num ; i++,j++){
		nKiTuKT[j]=string[i];
//		printf("\nstring %c", string[i]);
//		printf("\n%c", nKiTuKT[j]);
		count++;
		if(count == n){
			break;
		}
	}
	printf("\nchuoi ki tu ket thuc: %s", nKiTuKT);
}

void input6(char string[], int num){
	int i, j; 
	int doDaiMau = 0;
	int startWord; //startWord la so thu tu phan tu co chua ki tu bat dau tu dai nhat
	char tuDaiNhat[24];
	for(i = 0; i<num;i++){
		if(string[i] != ' '){
			tuDaiNhat[i] = string[i];
			doDaiMau++;
		}else{
			break;
		}
	}
	int countWordLength = 0;
	for(i = 0; i < num;i++){
		if(string[i] == ' '){
			printf("\n");
			countWordLength = 0;
		}else{
			printf("%c", string[i]);
			countWordLength++;
			//so sanh do dai tu
			if(countWordLength > doDaiMau){
				int startWord = i - countWordLength;
				doDaiMau = countWordLength;
				for(j = 0; j < countWordLength; j++){
					tuDaiNhat[j] = string[startWord];
					startWord++;
				}
			}
		}
//		printf("dodaimau: %d\n", doDaiMau);
	}
	printf("do dai lon nhat: %d\n", doDaiMau);
	printf("Tu co do dai lon nhat: %s", tuDaiNhat);
}

void input5(char string[], int num){
	int i;
	for(i = 0; i<num;i++){
		if(string[i] != ' '){
			printf("%c", string[i]);
		}else{
			printf("\n");
		}
	}
}

void input4(char string[], int num){
	int i; int countWords = 1;
	for(i = 0; i<num;i++){
		if(string[i] == ' '){
			countWords++;
		}
	}
	printf("There are %d word(s)", countWords);
}

void input2(char string[], int num){
	//cac ki tu thanh thuong
	int i = 0;
	char kiTuTh[num];
	for(i = 0; i < num; i++){
		kiTuTh[i] = tolower(string[i]);
	}
	printf("cac ki tu thanh thuong: %s\n", kiTuTh);
	
	//cac ki tu thanh hoa
	char kiTuHoa[num];
	for(i = 0; i < num; i++){
		kiTuHoa[i] = toupper(string[i]);
	}
	printf("cac ki tu thanh hoa: %s\n", kiTuHoa);
	
	//cac ki tu thanh hoa dau moi tu
	char kiTuHoaM[num];
//	char space = ' ';
//	char c = 'v';
	kiTuHoaM[0] = toupper(string[0]);
//	printf("%c = %c", kiTuHoaM[0], toupper(string[0]));
	for(i = 1; i < num; i++){
		if(string[i] != ' '){
			kiTuHoaM[i] = string[i];
		}else{
			i++;
			kiTuHoaM[i] = toupper(string[i]);
//			printf("Entered if: %c, %c",kiTuHoaM[i], toupper(string[i]));
		}
//		printf("\n %c, %c",kiTuHoaM[i],string[i]);
	}
//	printf("cac ki tu thanh hoa dau moi tu: %s\n", kiTuHoaM);
//	for(i = 0; i < num; i++){
//		printf("cac ki tu thanh hoa dau moi tu: %c\n", kiTuHoaM[i]);
//	}
	
	//xoa khoang trang thua
	char xoaKhoangTrang[num];
	int j;
	for(i = 0, j = 0; i < num, j < num; i++,j++){
		if(string[j] != ' '){
			xoaKhoangTrang[i] = string[j];
		}
		else{
			j++;
			xoaKhoangTrang[i] = string[j];
		}
//		xoaKhoangTrang[i] = string[j];
	}
	printf("xoa khoang trang thua: %s\n", xoaKhoangTrang);
}

void input3(char string[], int num){
	//xoa khoang trang thua
	char xoaKhoangTrang[num];
	int i,j;
	for(i = 0, j = 0; i < num, j < num; i++,j++){
		if(string[j] != ' '){
			xoaKhoangTrang[i] = string[j];
		}
		else{
			j++;
			xoaKhoangTrang[i] = string[j];
		}
//		xoaKhoangTrang[i] = string[j];
	}
	printf("xoa khoang trang thua: %s\n", xoaKhoangTrang);
}
