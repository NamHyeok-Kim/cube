#include <stdio.h>
#include <string.h>

int main()
{
	char filedel[101] = "C:\\Users\\nextop\\source\\repos\\c\\first\\";
	char tmp[101];

	printf("������ ���� ���� �Է��Ͻÿ� : ");

	gets(tmp);
	strcat(filedel, tmp);
	

	if (remove(filedel) == 0) {
		printf("������ �����Ǿ����ϴ�");
	}
	else {
		printf("������ �����߽��ϴ�");
	}
}