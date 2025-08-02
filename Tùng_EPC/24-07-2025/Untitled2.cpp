#include <stdio.h> 

int main(){
	int year = 2400;
	if(year % 4 == 0 && year % 100 != 0){
		printf("nam nhuan");
	}else if(year % 400 == 0){
		printf("nam nhuan");
	}else{
		printf("khong phai nam nhuan");
	}
	
	float diem;
    printf("\nMoi ban nhap vao diem: ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Vui lòng nhap diem.\n");
    }
    else if (diem >= 9) {
        printf("Hoc luc: Xuat sac\n");
    }
    else if (diem >= 8  && diem < 9) {
        printf("Hoc luc: Gioi\n");
    }
    else if (diem >= 6.5 && diem < 8) {
        printf("Hoc luc: Khá\n");
    }
    else if (diem >= 5 && diem < 6.5 ) {
        printf(" hoc luc: trung binh");
    }
} 
