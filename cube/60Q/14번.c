#include <stdio.h>

int main() {
	freopen("input.txt", "r", stdin);

	int A[5][3] = { 0 };//�ڷḦ �о�� �迭����
	//int a, b, c;
	int d[6] = {0, 5000, 6000, 7000, 10000, 20000 };
	int i;
	//�ڷḦ �о����
	i = 0;
	while (1) {
		if (i > 4) break;
		scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
		i++;
	}

	//�о�� �ڷ� ���
	for (i = 0; i < 5; i++)
		printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]);
	//���ǿ� �°� ó���ϱ�
	//��� ����ϱ�
	i = 0;
	while(1){
		if (A[i][0] + A[i][1] + A[i][2] == 0) break;
		printf("%d\n", d[A[i][0]] + d[A[i][1]] + d[A[i][2]]);
	}

	return 0;
}