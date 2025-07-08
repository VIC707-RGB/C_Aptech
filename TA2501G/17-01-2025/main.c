#include <stdio.h>
#include <stdlib.h>

// cấu trúc dữ liệu:
//  struct Student:
struct bangDiem
{
    float toan;
    float tiengAnh;
    float hoa;
};
typedef struct bangDiem bangDiem;

struct Student
{
    // thành viên / trường dữ liệu
    char name[200];
    char classroom[20];
    int age;
    char email[200];
    float gpa;
    bangDiem bang;
};
typedef struct Student HocSinh;

HocSinh nhapHocSinh()
{
    HocSinh s;
    printf("Nhập tên:");
    fflush(stdin);
    gets(s.name);
    fflush(stdout);

    printf("\nNhập lớp:");
    fflush(stdin);
    gets(s.classroom);
    fflush(stdout);

    printf("\nNhập email:");
    fflush(stdin);
    gets(s.email);
    fflush(stdout);

    printf("\nNhập GPA:");
    fflush(stdin);
    scanf("%f", &s.gpa);
    // student1.gpa = getchar();
    fflush(stdout);

    printf("\nNhập tuổi:");
    fflush(stdin);
    scanf("%d", &s.age);
    fflush(stdout);

    return s;
}

void xuatHocSinh(HocSinh s)
{
    printf("Tên: %s", s.name);
    printf("\n");
    printf("Lớp: %s", s.classroom);
    printf("\n");
    printf("Email: %s", s.email);
    printf("\n");
    printf("GPA: %f", s.gpa);
    printf("\n");
    printf("Tuổi: %d", s.age);
}

int main()
{
    // khai báo 1 biến theo kiểu dữ liệu HocSinh
    HocSinh student1;
    // student1.bang.toan = 10;
    student1 = nhapHocSinh();
    xuatHocSinh(student1);

    return 0;
}