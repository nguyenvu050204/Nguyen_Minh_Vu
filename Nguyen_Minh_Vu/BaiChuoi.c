#include "Chuoi.h"
#include <stdio.h>
void DemKyTu(char* str) {
	int count = 0;
	while (*str != '\0') {
		str++;
		count++;
	}
	printf("So kys tu trong chuoi: %d\n", count);
}
void DemSoSpace(char* str) {
	int count_space = 0;
	while (*str != '\0') {
		if (*str == ' ') {
			count_space++;
		}
		str++;
	}
	printf("So dau cach: %d\n", count_space);
}

void ChuyenInHoa(char* str) {
	char* str2 = str;
	while (*str2 != '\0') {
		if (*str2 >= 'a' && *str2 <= 'z') {
			*str2 -= 32;
		}
		str2++;
	}
	printf("Chuyen sang in hoa: %s\n", str);
}
void DemTu(char* str) {
	int Count_Word = 0;
	int Word = 0;
	while (*str != '\0') {
		if (*str != ' ') {
			if (Word == 0) {
				Count_Word++;
				Word = 1;
			}
		}
		else {
			Word = 0;
		}
		str++;
	}
	printf("So tu trong chuoi: %d\n", Count_Word);
}
void InHoaChuDau(char* str) {
	char* str3 = str;
	int Word = 0;
	while (*str3 != '\0') {
		if (*str3 != ' ') {
			if (Word == 0) {
				if (*str3 >= 'a' && *str3 <= 'z') {
					*str3 -= 32;
				}
				Word = 1;
			}
		}
		else {
			Word = 0;
		}
		str3++;
	}
	printf("So tu trong chuoi: %s\n", str);
}

void TimC(char* str) {

	while (*str != '\0') {
		if (*str == 'c' || *str == 'C') {
			printf("%p\n", &str);
			return;
		}
		str++;
	}

}