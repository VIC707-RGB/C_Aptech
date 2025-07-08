#include <stdio.h>
#include <stdlib.h>

void pointers()
{
    int *ptr, *ptr2, *ptr3;

    int N = 10;
    int M = 100;  // 4 bytes
    char c = 'n'; // 1 byte
    ptr = &N;
    ptr2 = &N;
    ptr3 = &N;
    // in ra gia tri ben trong dia chi
    printf("N: %d\n", N);
    printf("M: %d\n", M);
    printf("N: %d\n", *ptr); // *: cho ra du lieu dc chua trong dia chi day
    // in ra dia chi
    printf("Dia chi N: %p\n", &N); // &: cho ra dia chi cua bien do
    printf("Dia chi M: %p\n", &M);
    printf("Dia chi N: %p\n", ptr);

    *ptr = 321;
    printf("N: %d\n", N);
}

void pointerWithFunction(int *a)
{
    *a += 10;
}
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int *convert(int *x, int *y)
{
    x = y;
    return x;
}
void pointerWithFunct()
{
    int x = 1;
    pointerWithFunction(&x);
    // printf("x: %d", x);

    int N = 28, M = 56;
    int *ptr1 = &N;
    int *ptr2 = &M;
    printf("Truoc khi goi ham : \n");
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
    ptr1 = convert(ptr1, ptr2);
    printf("Sau khi goi ham : \n");
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
}

int main(int argc, char *argv[])
{
    // Cấp phát vùng nhớ tương đương mảng 100 phần tử int
    // sizeof(int) = 4
    int n = 100;
    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Cap phat khong thanh cong !\n");
    }
    else
    {
        printf("Cap phat thanh cong !\n");
        for (int i = 0; i < n; i++)
        {
            // a[i] = 28 + i;
            *(a + i) = 28 + i; // cũng được
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        free(a); // giai phong bo nho
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}