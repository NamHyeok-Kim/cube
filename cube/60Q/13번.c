#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int moon;

	//����ڿ��� �� �ޱ�
	for (int i = 0;; i++) {
		//printf("�Է� : ");
		scanf("%d", &moon);
		//0 �Է��ϸ� ����
		if (moon == 0) {
			break;
		}
		if (moon > 12) {
			printf("\n99");
		}
		printf("\n %d", month[moon]);
	}
	
	

}