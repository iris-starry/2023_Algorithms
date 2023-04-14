// Q2. 다음 등차수열에 대하여 200번째 숫자까지 합을 구하는 알고리즘 (2 + 8 + 14 + 20 + 26...)

#include <stdio.h>
main() {
	int a = 2; int d = 6;
	int s = a; int n = 2; int an = 0;
	
	while (1)
	{
		an = a + (n - 1) * d;
		s = s + an;
		n = n + 1;
		if (n > 5) break;
	}
	printf("%d\n", s);
}