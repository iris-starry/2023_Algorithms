// Q2. ���� ���������� ���Ͽ� 200��° ���ڱ��� ���� ���ϴ� �˰��� (2 + 8 + 14 + 20 + 26...)

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