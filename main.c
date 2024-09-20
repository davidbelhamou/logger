#include <stdio.h>
#include "logger.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define INPUT_MAXSIZE 1024

int main() {
	printf("Choose from the following options\n");
	printf("1.quit\n");
	char word[INPUT_MAXSIZE];
	int res = fgets(word, INPUT_MAXSIZE, stdin);
	printf("Size of the input array: %zu bytes\n", sizeof(word));
	printf("Length of the entered string: %zu characters\n", strlen(word));
	return 0;
}