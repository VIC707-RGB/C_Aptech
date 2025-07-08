#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	return 0;
}

void saveFile(struct Student data[], int sohs){
    FILE* file;//
    
//    char dataLine[500];
	char name[50];
	int age;
    //

    // M? file d? ghi d? li?u trong ch? d? binary
    file = fopen("filename.bin", "w");

    if (file != NULL) {
        // Ghi d? li?u vào file
        int i;
        for(i=0; i<sohs; i++){
        	name = data[i].name;
        	age = data[i].age;
        	fwrite(data[i], sizeof(char[]), sizeof(name), file);//moi lan chay dong nay -> ghi 1 dong du lieu
        	//fwrite(caiDienVao, kichCodangDuLieuDienVao, kichCoDuLieu, file)
		}
        

        // Ðóng file
        fclose(file);

        printf("Luu file thành công.\n");
    } else {
        printf("Luu file th?t b?i.\n");
    }
}

void openFile(){
	FILE* file;
    char buffer[100];

    // M? file d? d?c d? li?u trong ch? d? binary
    file = fopen("filename.bin", "r");

    if (file != NULL) {
        // Ð?c d? li?u t? file vào buffer
        size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer), file);

        // In d? li?u ra màn hình theo b?ng
        for (size_t i = 0; i < bytesRead; i++) {
             printf("%c ", buffer[i]); // In du?i d?ng ký t?
        }
        printf("\n");

        // Ðóng file
        fclose(file);
    } else {
        printf("Không th? m? file.\n");
    }
}
