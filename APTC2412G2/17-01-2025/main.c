#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Student
{
    //thành viên / tru?ng d? li?u
    char name[200];
    char classroom[20];
    int age;
    char email[200];
    float gpa;
};
typedef struct Student HocSinh;
void nhapHocSinh(HocSinh s)
{
    printf("Nh?p tên:");
    fflush(stdin);
    gets(s.name);
    fflush(stdout);

    printf("\nNh?p l?p:");
    fflush(stdin);
    gets(s.classroom);
    fflush(stdout);

    printf("\nNh?p email:");
    fflush(stdin);
    gets(s.email);
    fflush(stdout);

    printf("\nNh?p GPA:");
    fflush(stdin);
    scanf("%f", &s.gpa);
    // student1.gpa = getchar();
    fflush(stdout);

    printf("\nNh?p tu?i:");
    fflush(stdin);
    scanf("%d", &s.age);
    fflush(stdout);
}

void xuatHocSinh(HocSinh s)
{
    printf("Tên: %s", s.name);
    printf("\n");
    printf("L?p: %s", s.classroom);
    printf("\n");
    printf("Email: %s", s.email);
    printf("\n");
    printf("GPA: %f", s.gpa);
    printf("\n");
    printf("Tu?i: %d", s.age);
}
int NHaptuoi (int *arr[], int *n){
  int i;  
  int age;
        for (i = 0; i <*n; i++){
        do{
            printf ("Nhap tuoi:");
          scanf ("%d",&age);//dia chi cua phan tu i trong mang arr;
              if (age <= 5 || age >= 18){//*(arr +i) : Gia tri hien tai cua i
                printf ("Vui long nhap lai:\n");}
                else {
                  * (arr +i) =  age;              
              printf ("ok");}
         } 
     while (age <= 5 || age >= 18);}
    return arr;
     }

void Intuoi (int *arr[], int n){
  int i;  
   for (i= 0; i<n; i++){
     printf ("%d\n", *(arr + i));
     }
}

void Min (int *arr[], int n){
  int i; 
  int min = *arr[0];
  for (i = 0; i<n; i++){
    if (*(arr + i)< min){
    min = *(arr + i);}
    }
    printf ("Do tuoi be nhat la %d", min);
  }

void tb(int *arr[], int n) {
    int i;
    int k;
    int tong = 0;  // Initialize tong

    // Sum values and print
    for (i = 0; i < n; i++) {
        tong += *arr[i];  // Dereference the pointer to get the value
        printf("%d ", *arr[i]);
    }

    // Calculate average
    k = tong / n;
    printf("\nTong la %d\n", tong);
    printf("Do tuoi trung binh la %d\n", k);
}

int main(int argc, char const *argv[])
{
  int Sohocsinh;
  printf ("So luong hoc sinh");
  scanf ("%d",&Sohocsinh);
  int arr[Sohocsinh];
  tb (arr, Sohocsinh);
  return 0;
}
