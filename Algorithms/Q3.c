//Q3. ���� �������� ���Ͽ� 100��° �ױ��� ���� ���ϴ� �˰����̴�. (2 + 6 + 18 + 54 + 162 + 286.....)
// �� Do �Ǵ� while���� ����� ��

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
