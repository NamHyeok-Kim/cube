#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp;
	char str[100];

	fp = fopen("file.txt", "w");

	if (fp == NULL) {
		fprintf(stderr, "���� <file.txt> ����Ұ�\n");
	}

	do {
		gets_s(str);
		fputs(str, fp);
	} while (strlen(str) != 0);

	fclose(fp);
	return 0;
}