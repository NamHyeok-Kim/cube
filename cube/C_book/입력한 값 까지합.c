#include <stdio.h>

int main()
{
	int res, cnt = 0;
	printf("�Է��� ���� : ");
	scanf("%d", &res);

	if (res < 0) {
		printf("������ �ȵ˴ϴ�.\n");
	}
	for (int i = 0; i < res; i++) {
		cnt += i;
	}
	printf("%d ���� ������ ����%d �Դϴ�", res, cnt);
	return 0;
}
