#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fin, * fout;
	char ch;
	char in_str[20] = { '\0' };
	int a, cnt;

	fout = fopen("test1.txt", "W");
	
	printf("Ű����� �Է��� �ڷḦ ��ũ�� �����մϴ�.\n");
	printf("������ ���ڿ��� �Է��Ͻʽÿ� : ");
	gets(in_str);

	for (a = 0; a < cnt; a++) fputc(in_str[a], fout);

	fclose(fout);

	printf("\n��ũ�� ����� ���ϸ� test1.txt �� �ִ� �� Ȯ���մϴ�.\n");
	system("dir/w");
	printf("\ntest1.txt �� ������ type �� �̿��� ������ Ȯ���մϴ�\n");
	system("dir/w");

	printf("\n\n��ũ�� ����� �ڷḦ �޸𸮷� �о� ����Ϳ� ����մϴ�.\n");
	fin = fopen("text1.txt", "r");
	if (fin == NULL) {
		printf("������ ���� �о�� �� �����ϴ�");
		return;
	}
	while (ch != EOF) {
		ch = fgetc(fin);
		putchar(ch);
	}
	putchar('\n');

	fclose(fin);

	return 0;
}