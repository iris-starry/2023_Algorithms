#include <stdio.h>

int main() {
	int a, b, n;
	int sum = 0;
	printf("a �Է� : ");
	scanf_s("%d", &a);
	printf("b �Է� : ");
	scanf_s("%d", &b);
	if(a>b)
		for (n = b; n <= a; n++) {
			sum += n;
		}
	else
		for (n = a; n <= b; n++) {
			sum += n;
		}
	
	printf("a�� b ������ �ڿ������� �հ� : %d\n", sum);
}