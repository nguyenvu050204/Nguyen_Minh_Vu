#include <stdio.h>


void TimVaInKyTuC(char* str) {
    while (*str != '\0') {
        if (*str == 'c' || *str == 'C') {
            printf("Tim thay ky tu 'c' tai dia chi: %p\n", &str);
            return;
        }
        str++;
    }
    printf("Khong tim thay ky tu 'c' trong chuoi.\n");
}

int main() {
    char chuoi[] = "c!";
    TimVaInKyTuC(chuoi);
    return 0;
}