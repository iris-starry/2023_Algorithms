// Q1. 1부터 100까지 더하는 알고리즘

#include <stdio.h>
main() {
	int sum = 0; int n = 1; //초기화
	do {
		sum = sum + n;
		n = n + 1;
		if (n > 100) break;
	} while (n <= 100);
	printf("%d\n", sum);
}