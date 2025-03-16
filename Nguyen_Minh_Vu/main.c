#include <stdio.h>

void main() {
	int count = 0;
	char srt[] = "hello";
	while (srt[count] != NULL) {
		count++;
	}
	printf("%d", count);

}