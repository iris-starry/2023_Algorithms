#include <stdio.h>

int main() {
	int a, b, n;
	int sum = 0;
	printf("a 입력 : ");
	scanf_s("%d", &a);
	printf("b 입력 : ");
	scanf_s("%d", &b);
	if(a>b)
		for (n = b; n <= a; n++) {
			sum += n;
		}
	else
		for (n = a; n <= b; n++) {
			sum += n;
		}
	
	printf("a와 b 사이의 자연수들의 합계 : %d\n", sum);
}