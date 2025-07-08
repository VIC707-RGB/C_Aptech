#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*p)[4];  // Con tr? d?n m?ng có 4 ph?n t? ki?u int

    p = arr;  // Gán d?a ch? c?a m?ng cho con tr? p

    printf("Giá tr? c?a m?ng arr:\n");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nGiá tr? c?a m?ng s? d?ng con tr?:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
        	printf("(%d, %d): ", *p, j);
            printf("%d ", *(*p + j));
        }
        printf("\n");
        p++;  // Di chuy?n con tr? p sang ph?n t? ti?p theo c?a m?ng
    }
}
