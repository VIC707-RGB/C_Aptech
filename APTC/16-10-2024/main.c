#include <stdio.h>
#include <stdbool.h>

int timSoDao(int nInput);
bool laSoDoiXung(int nInput);

int main() {
    int nInput;

    printf("Enter n (integer): ");
    scanf("%d", &nInput);

    if (laSoDoiXung(nInput)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

int timSoDao(int nInput) {
    int nSoDao = 0;
    int nRem;

    while (nInput != 0) {
        nRem = nInput % 10;
        nSoDao = (nSoDao * 10) + nRem;
        nInput = nInput / 10;
    }

    return nSoDao;
}

bool laSoDoiXung(int nInput) {
    if (nInput == timSoDao(nInput))
        return true;
    else
        return false;
}
