#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct phanSo{
	int tuSo;
	int mauSo;
};
typedef struct phanSo phanSo;

void rutGonPhanSo(phanSo ps){
	if(ps.tuSo % 7 == 0 && ps.mauSo % 7 == 0){
		ps.tuSo = ps.tuSo/7;
		ps.mauSo = ps.mauSo/7;
	}
	//tuong tu doi voi cac so 2, 3, 5
}

void cong(phanSo ps1, phanSo ps2){
	//dk: ps1 co mau so = ps2
	phanSo ps3;
	if(ps1.mauSo == ps2.mauSo){
		ps3.mauSo = ps1.mauSo;
		ps3.tuSo = ps1.tuSo + ps2.tuSo;
	}else{
		ps3.mauSo = ps1.mauSo*ps2.mauSo;
		ps3.tuSo = (ps1.tuSo*ps2.mauSo) + (ps2.tuSo*ps1.mauSo);
	}
	
	rutGonPhanSo(ps3);
	printf("ket qua cong phan so: %d/%d", ps3.tuSo, ps3.mauSo);
}

int main(int argc, char *argv[]) {
	phanSo ps1; //bien kieu phanSo
	phanSo ps2;
	
	ps1.tuSo = 1;
	ps1.mauSo = 2;
	printf("tu so = %d, mau so = %d", ps1.tuSo, ps1.mauSo);
	return 0;
}
void bai10(){
	//strlen(char s[]) -> tra ve do dai chuoi
	//strcpy(s1[], s2[]) -> copy s2 vao s1
	char s[100] = "Cao Khanh Linh";
	char stringGoc[100] = "Cao Khanh Linh"; //chuoi goc
	//strtok(s[], dauHieuPhanCach) -> char *
	int n = 0; //dem so tu
	char chuoiLuuKetQua[10][100]; //10 tu, moi tu chua max 100 chu
	char *ketqua = strtok(s, " "); //chi xet den tach cac tu qua " " - xet lan dau tien
	while(ketqua != NULL){
//		printf("%s\n", ketqua); //in ra tung tu dc tach truoc
		
		strcpy(chuoiLuuKetQua[n], ketqua); //luu tu lay duoc tu strtok
		n++; //cap nhat so tu
		ketqua = strtok(NULL, " "); //tach them neu con tu dang sau
	}
//	printf("s sau khi chay ra: %s\n", s);
//	printf("ketqua sau khi chay ra: %s\n", ketqua);

	//xem ket qua
	int i;
	//buoc 2: luu ten vao trong 1 chuoi rieng
	char emailName[100];
	for(i = 0; i < n; i++){
		printf("chuoiLuuKetQua[%d] = %s\n", i, chuoiLuuKetQua[i]);
		if(n - i == 1){
			strcpy(emailName, chuoiLuuKetQua[i]);
		}
	}
	printf("%s\n", emailName);
	int index = strlen(emailName);
//	printf("index: %d\n", strlen(emailName));
	//vd: Linh -> index == 4
	
	//lay chu cai tung tu
	//1: tu dau tien (ho)
	emailName[index] = s[0];
	index++;
	for(i = 0; i < strlen(stringGoc); i++){
		printf("%c\n", stringGoc[i]);
		if(stringGoc[i] == ' '){
			emailName[index] = stringGoc[i+1];
			index++;
		}
	}
	printf("%s\n", emailName);
	//bo chu cuoi
	emailName[index-1] = ' ';
	//lay ra chuoi
	printf("chuoi cuoi cung: %s\n", emailName);
} 
