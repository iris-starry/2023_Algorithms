// �Ǻ���ġ ������ ���Ͽ� 100��° �ױ����� ���� ���ϴ� �˰���
// 1 + 1 + 2 + 3 + 5 + 8 + 13

#include <stdio.h>
main() {
	int a, b, c, s, n;
	a = 1; b = 1; s = 2; n = 2;
	do {
		c = a + b;
		s = s + c;
		n = n + 1;
		if (n == 100) break;
		a = b;
		b = c;
	} while (1);

	printf("total = %d�Դϴ�.\n", s);
}