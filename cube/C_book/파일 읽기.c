#include <stdio.h>

int main()
{
	int size[11];
	char opfi[101];

	printf("�� ���� �̸� : ");
	scanf("%s", opfi);

	FILE* fp;
	fp = fopen(opfi, "r");

	if (fp == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�");
		exit (0);
	}

	fgets(size, 10, fp);
	printf("%s", size);
}