#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = NULL;
	int c;

	fp = fopen("alphabet.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "���� alphabet.txt�� �� �� �����ϴ�.\n");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);
	return 0;
}
