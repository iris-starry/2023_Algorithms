// Q1. 1���� 100���� ���ϴ� �˰���

#include <stdio.h>
main() {
	int sum = 0; int n = 1; //�ʱ�ȭ
	do {
		sum = sum + n;
		n = n + 1;
		if (n > 100) break;
	} while (n <= 100);
	printf("%d\n", sum);
}