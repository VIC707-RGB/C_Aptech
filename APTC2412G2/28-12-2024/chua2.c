#include <stdio.h>
#include <stdbool.h>

//BAI TAP NAY SE CHUA SAU KHI HOC XONG VE MANG 
// Kiem tra nam nhuan 
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// KTRA NGAY HOP LE
bool isValidDate(int day, int month, int year) {
    // KTRA NAM HOP LE
    if (year < 1) {
        return false;
    }

    // KTRA THANG HOP LE
    if (month < 1 || month > 12) {
        return false;
    }

    // S? ng�y t?i �a trong t?ng th�ng
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //HOAN TOAN CO THE SU DUNG VONG SWITCH KET HOP CAC CASE, KQUA TTU

    // neu nam nhuan, th�ng 2 c� 29 ng�y
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    // Ki?m tra ng�y c� h?p l? kh�ng
    if (day < 1 || day > daysInMonth[month - 1]) { //ngay se lay ra theo mang: INDEX: THANG - 1 
        return false;
    }

    return true;
}

//int main() {
//    int day, month, year;
//
//    // NHAP
//    printf("Nhap ngay (dd): ");
//    scanf("%d", &day);
//    printf("Nhap thang (mm): ");
//    scanf("%d", &month);
//    printf("Nhap nam (yyyy): ");
//    scanf("%d", &year);
//
//    // KTRA & dua ra ket qua
//    if (isValidDate(day, month, year)) {
//        printf("Ng�y %02d/%02d/%04d l� ng�y h?p l?.\n", day, month, year);
//    } else {
//        printf("Ng�y %02d/%02d/%04d kh�ng h?p l?.\n", day, month, year);
//    }
//
//    return 0;
//}

