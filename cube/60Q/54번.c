#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int** p;
	int n;//�Է� �� �࿭��
	int cnt;//������
	int N;//n�� ��ü�� ��
	int r, c;//�࿭����
	int sw;//�࿭�� ������ ������ ����
	int i;//�ݺ�����

	scanf("%d", &n);
	p = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		p[i] = (int*)malloc(sizeof(int) * n);
	}

	N = n; 
	r = 0; c = -1; sw = 1; cnt = 0;
	while (1)
	{
		//����ȯ
		for (i = 1; i <= N; i++) {
			c += sw;
			p[r][c] = ++cnt;
		}

		N--;
		if (N < 1) break;

		//�ຯȯ
		for (i = 1; i <= N; i++) {
			r += sw;
			p[r][c] = ++cnt;
		}

		sw *= -1;
	}

	//��ºκ�
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}