#include <stdio.h>
#include "logger.h"
#include <string.h>
#include <stdarg.h>
#define _CRT_SECURE_NO_WARNINGS
#define INPUT_MAXSIZE 1024

int sum(int, ...);

int main() {
	printf("Choose from the following options\n");
	printf("1.quit\n");
	char word[INPUT_MAXSIZE];
	int res = fgets(word, INPUT_MAXSIZE, stdin);
	printf("Size of the input array: %zu bytes\n", sizeof(word));
	printf("Length of the entered string: %zu characters\n", strlen(word));
	printf("sum is: %d", sum(3, 4, 6 , 8));
	return 0;
}
int sum(int a, ...) {
	int sum = 0;

	va_list ptr_last_arg;
	va_start(ptr_last_arg, a);

	for (int i = 0; i < a; i++) {
		int tmp = va_arg(ptr_last_arg, int);
		printf("tmp = %d\n", tmp);
		sum += tmp;
	}
	va_end(ptr_last_arg);
	return sum;
}