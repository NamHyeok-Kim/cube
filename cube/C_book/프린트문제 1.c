#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* baeyul[5];//ù ��° ���� �� ���� ����
	int cnt; //������ ������ ����

	//����� ������ ���۹迭���� �����Ͽ� �ֱ�
	cnt = 1;
	for (int i = 0; i < 5; i++) {
		baeyul[i] = (int*)malloc(sizeof(int) * 5);
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++) {
				*(baeyul[i] + j) = cnt++;			
			}
			cnt += 4;
		}
		else {
			for (int j = 0; j < 5; j++) {
				*(baeyul[i] + j) = cnt--;
			}
			cnt += 6;
		}
	}
	//����� ����Ѵ�.

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%4d", *(baeyul[i] + j));
		}
		printf("\n");
	}
}