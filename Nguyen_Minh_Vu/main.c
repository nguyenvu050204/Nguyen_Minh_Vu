#include <stdio.h>

void main() {
	/*
	int count = 0;
	char srt[] = "hello";
	while (srt[count] != NULL) {
		count++;
	}
	printf("%d", count);
	*/
	char str[] = "hello";
	int i;
	for (i = 0; str[i] != NULL;i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - (97 - 65);
		}
	}
	printf("%s",str);
}