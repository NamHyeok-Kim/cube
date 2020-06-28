#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("alphabet.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "���� alphabet.txt�� �� �� �����ϴ�.\n");
		exit(1);
	}

	char c;
	for (c = 'a'; c <= 'z'; c++) {
		fputc(c, fp);
	}

	fclose(fp);
	return 0;
}