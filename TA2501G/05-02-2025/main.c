#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void bai8910(char *name){
    // char result[1000];
    char result[10][50]; //mang 2 chieu ket hop cua 2 mang 1 chieu
    int count = 0;

    char *token = strtok(name, " "); //lan goi thu nhat
    while(token != NULL){ //khi token tro toi vi tri != null -> tu dong lam cac hanh dong duoi
        //   nguYEN   Thuy  linH 
        //tran    VaN  Toan
        if(strlen(token) > 0){
            //chuan hoa tung tu mot
            token[0] = toupper(token[0]); //viet hoa chu cai dau
            for(int i = 1; i < strlen(token); i++){
                token[i] = tolower(token[i]); //viet thuong cac chu cai sau
            }

            // puts(token);

            //bai 8
            // strcat(result, token); //lan dau tien result == null -> thay the gtri token vao gtri result
            // //lan thu 2 tro di result co gtri -> noi tiep cac chuoi sau vao gtri result co san
            // strcat(result, " ");

            //bai 9
            strcpy(result[count], token);
            count++;
        }
        //Các lần tách tiếp theo
        token = strtok(NULL, " ");
    }

    //in ten truoc, ho va dem sau
    // printf("Ten chuan hoa: %s ", result[count - 1]);
    // for(int i = 0; i < count - 1; i++){
    //     printf("%s ", result[i]);
    // }
    char finalName[1000];
    strcat(finalName, result[count - 1]); //lay ten truoc: ten co so thu tu la count - 1
    strcat(finalName, " ");
    for(int i = 0; i < count - 1; i++){
        strcat(finalName, result[i]);
        strcat(finalName, " ");
    }
    printf("Ten chuan: ");
    puts(finalName);
    // puts(result);

    char email[1000];
    //email format: ten viet thuong + chu cai dau ho va dem + @aptech.com.vn
    //ten viet thuong
    strcpy(email, result[count - 1]);
    //chu cai dau ho va dem
    for(int i = 0; i < count - 1; i++){
        char letter[2]; //mang trung gian chua chu
        letter[0] = result[i][0]; //lay vi tri dau cua mang chua chu de luu tru chu cai dau ho va dem
        // printf("letter: %c\n", letter[0]);
        strcat(email, letter); //noi chuoi email gia tri cua chuoi letter
    }
    strcat(email, "@aptech.com.vn");
    // email[0] = tolower(email[0]);
    for(int i = 0; i < strlen(email); i++){
        email[i] = tolower(email[i]);
    }
    puts(email);
}

void bai5(){
    char K[100];
    char V[100];

//nhap vao chuoi
    printf("Enter K: ");
    gets(K);
    printf("Enter V: ");
    gets(V);

    // puts(K);
    // puts(V);

    char *res = strstr(K, V);
    if(res == NULL){
        printf("%s khong xuat hien trong %s\n", V, K);
    }
    else{
        printf("%s xuat hien trong %s\n", V, K);
        printf("Vi tri xuat hien dau tien : %d\n", res - K + 1);
    }
}

int main(){
    char name[1000];
    printf("Enter name: ");
    gets(name);

    bai8910(name);
    return 0;
}