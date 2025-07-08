#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bai10();
	return 0;
}

void bai10(){
	int n;
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int ary1[n]; //tap hop 1
	int i;
	for(i = 0; i < n; i++){
		printf("Enter ary1[%d] = ", i);
		scanf("%d", &ary1[i]);
	}
	
	int solanHighest = 0;
	int solan, gtriPtu, j;
	for(i = 0; i < n; i++){
		ary1[i];
		solan = 0;
		for(j = 0; j < n; j++){
			if(ary1[i] == ary1[j]){
				solan++;
			}
		}
		printf("\nary1[%d] appear %d time(s)", i, solan);
		if(solan > solanHighest){
			solanHighest = solan;
			gtriPtu = ary1[i];
		}
	}
	
	//highest appearance
	for(i = 0; i < n; i++){
		if(ary1[i] == gtriPtu){
			printf("\nary1[%d] = %d has highest appearance of %d time(s)", i, ary1[i], solanHighest);
		}
	}
	
}

void bai8(){
	int n;
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int ary1[n]; //tap hop 1
	int ary2[n]; //tap hop 2
	
	//them du lieu cho tap hop 1
	int i,j;
	for(i = 0; i < n; i++){
		printf("Enter ary1[%d] = ", i);
		scanf("%d", &ary1[i]);
	}
	printf("\n");
	//them du lieu cho tap hop 2
	for(i = 0; i < n; i++){
		printf("Enter ary2[%d] = ", i);
		scanf("%d", &ary2[i]);
	}
	
	//gia tri muc tieu:
	int total;
	printf("Enter total number wanted:");
	scanf("%d", &total);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(ary1[i] + ary2[j] == total){
				printf("ary1[%d] + ary2[%d] == %d\n", i,j,total);
			}
		}
	}
}

void bai3(){
	int n;
	printf("Enter number of elements:");
	scanf("%d", &n);
	
	int ary[n]; //tap hop goc
	int aryChua[n]; //tap hop luu tru cac phan tu duy nhat
	
	//them du lieu cho tap hop goc
	int i;
	for(i = 0; i < n; i++){
		printf("Enter ary[%d] = ", i);
		scanf("%d", &ary[i]);
	}
	
	//lap qua mang, kiem tra cac phan tu co trung lap nhau k 
	int j,l;
	int ptuTrung[n];
	int check, checkTrung;
	int first = 1;
	int thuTu = 0; //ptuTrung[i]
	int duyNhat = 0;
	for(i = 0; i < n; i++){
		check = 0;
		for(j = 0; j < n; j++){
			if(ary[i] == ary[j]){
				check++;
			}
		}
		
		//them vao tap hop phan tu trung nhau
		if(check > 1){
			if(first == 1){ //lan gan gia tri dau tien
				ptuTrung[thuTu] = ary[i];
				thuTu++;
			}
			checkTrung = 0;
//			ptuTrung[thuTu] = ary[i];
			for(l = 0; l < thuTu; l++){
				if(ptuTrung[l] == ary[i]){
					checkTrung++;
				}
			}
			if(checkTrung == 0){
				ptuTrung[thuTu] = ary[i];
				thuTu++;
			}
			first++; //ket thuc gan gtri dau tien
		}else{
			aryChua[duyNhat] = ary[i];
			duyNhat++;
		}
	}
	
	//ket qua cac phan tu trung
	for(i = 0; i < thuTu; i++){
		printf("\nptuTrung[%d] = %d\n", i, ptuTrung[i]);
	}
	
}
