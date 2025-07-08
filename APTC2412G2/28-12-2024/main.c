#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	//ktra so n nhap vao > 0
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		if(n <= 0){
			printf("You must enter a positive number.");
		}
	}while(n <= 0);
	
	int so1, so2, soTiepTheo;
	
	//fibonacci
	int i;
	for(i = 0; i < n; i++){
		if(i == 0){
			printf("%d, ", i);
			so1 = i;
			continue; //break;
		}
		if(i == 1){
			printf("%d, ", i);
			so2 = i;
			continue;
		}
		soTiepTheo = so1 + so2;
		printf("%d, ", soTiepTheo);
		so1 = so2;
		so2 = soTiepTheo;
	}
	
	return 0;
}
void demSoTinhTong(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int soCanXet = n;
	
	//1
	int tongSoLuongCacChuSo = 0;
	while(soCanXet != 0){
		tongSoLuongCacChuSo++;
		soCanXet /= 10;//n = n/10;
	}
	printf("So luong chu so cua n: %d\n", tongSoLuongCacChuSo);
	
	//2
	soCanXet = n;
	int chuSo = 0;
	int tongCacChuSo = 0;
	while(soCanXet != 0){
		chuSo = soCanXet % 10;
		tongCacChuSo += chuSo;
		soCanXet /= 10;//n = n/10;
	}
	printf("Tong cac chu so cua n: %d\n", tongCacChuSo);
}

void ktraSoHoanHao(){
	int n, tongUocSo;
	tongUocSo = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int i;
	//uoc so:
	//- la nhung so ma so minh dang xet co the chia het cho dc
	//- so do khong lon hon so minh dang xet chia 2
	//16 1 2 4 8=2*4
	for(i = 1; i < n; i++){
		if(n % i == 0){
			tongUocSo += i; //tongUocSo = tongUocSo + i; 
		}
	}
	
	if(tongUocSo == n){
		printf("n la so hoan hao");
	}else{
		printf("n khong phai la so hoan hao");
	}
}

void tamGiacSo(){
	int n;
	do{
		printf("Enter number: ");
		scanf("%d", &n);
		if(n <= 1){
			printf("You must enter a positive number.");
		}
	}while(n <= 1);
	
	int dem, batDau, lanCuoi;
	lanCuoi = 1;
	for(dem = 1; dem <= n; dem++){
		for(batDau = 1; batDau <= lanCuoi; batDau++){
			printf("%d ", batDau);
		}
		lanCuoi++;
		printf("\n");
	}
}

void revNumViet(){
	int so, soDaoNguoc;
	
	do{
		printf("Enter number: ");
		scanf("%d", &so);
		if(so <= 0){
			printf("You must enter a positive number.");
		}
	}while(so <= 0);
	 
	soDaoNguoc = 0;
	//01234
	//
	int lanLap;
	while(so != 0){
		printf("Lan lap thu %d:\n", lanLap);
		int chuSoDuocDemToi = so % 10;
		printf("chuSoDuocDemToi: %d\n", chuSoDuocDemToi);
		soDaoNguoc = soDaoNguoc * 10 + chuSoDuocDemToi;
		printf("soDaoNguoc: %d\n", soDaoNguoc);
		so /= 10; //number = number/10; -> number = 0
		printf("so: %d\n\n", so);
		lanLap++;
	}
	
	printf("Reversed number: %d", soDaoNguoc);
}

void revNum(){
	int number, reversedNumber = 0;

    // Nhap lan dau & Kiem tra so nguyen duong
    do {
    	if(number <= 0){
    		printf("Please enter a positive integer again.\n");
		}
    	// Nhap
	    printf("Enter a positive integer: ");
	    scanf("%d", &number);
    } while (number <= 0);

    // Ðao nguoc so
    while (number != 0) {
        int digit = number % 10; //Lay chu so cuoi bang cach chia lay so du             
        printf("Last digit: %d", digit); 
        reversedNumber = reversedNumber * 10 + digit; // Them so vao cuoi chu so dao nguoc
        number /= 10; // Loai bo chu so cuoi: number = number / 10 
    }

    // kqua
    printf("Reversed num: %d\n", reversedNumber);
}
