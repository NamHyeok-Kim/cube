#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	printf("���� ���� �̸� : ");
	scanf("%s%*c", file1);

	printf("���� ���� �̸� : ");
	scanf("%s%*c", file2);

	//ù ���� ������ �б� ���� ����.
	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "���� ����%s�� �� �� �����ϴ�", file1);
		exit(1);
	}

	//�� ��° ������ ���� ���� ����.
	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf("���� ���� %s�� �� �� �����ϴ�", file2);
		exit(1);
	}
	int c;
	//fp1���� �� ���ھ� �о fp2�� ����
	while ((c = fgetc(fp1)) != 0) {
		fputc(c, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}