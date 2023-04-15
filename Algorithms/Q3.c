//Q3. 다음 등비수열에 대하여 100번째 항까지 합을 구하는 알고리즘이다. (2 + 6 + 18 + 54 + 162 + 286.....)
// ※ Do 또는 while문을 사용할 것

#include <stdio.h>
main() {
	int n = 1; int a = 2;
	while (1)
	{
		a = a * 3;
		n = n + 1;
		if (n > 100) break;
	}
	printf("%d\n", a);
}
