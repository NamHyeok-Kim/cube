#include <stdio.h>

int main()
{
	int num[101];
	int sum = 0, idx = 0;

	freopen("NUMBER.txt", "r", stdin);

	for(int i = 0;;i++) {
		if (scanf("%d", &num[i]) == EOF) break;
		idx++;
		sum += num[i];
	}

	printf("�������� ���� : %d\n", idx);
	printf("�������� �հ� : %d\n", sum);
	printf("�������� ��� : %d\n", sum / idx);

}