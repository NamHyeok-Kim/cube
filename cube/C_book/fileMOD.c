#include <stdio.h>
#include <string.h>

typedef struct fileC {
	FILE* fp;
}read;


void FileWrite()
{
	char name[100];
	
	read WF;

	while(1){
		char file_name[101] = { 0 };
		printf("���� ���� �� : ");
		scanf("%s%*c", file_name);

		if (file_name[0] == 's') break;

		WF.fp = fopen(file_name, "w");
		if (WF.fp == NULL) {
			fprintf(stderr, "������ �� �� �����ϴ�. \n");
			exit(0);
		}
		printf("%s���Ͽ� �� �̸� : ", file_name);
		gets(name);
		fputs(name, WF.fp);

		fclose(WF.fp);
	}
}

void FileOpen()
{
	read FR;
	char size[20];
	char opfi[101];

	printf("�� ���� �̸� : ");
	scanf("%s%*c", opfi);

	FR.fp = fopen(opfi, "r");

	if (FR.fp == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�");
		exit(0);
	}

	fgets(size, 10, FR.fp);
	printf(" %s\n", size);
}
void FileDel()
{
	while(1){
		char DelRes[100] = { "C:\\Users\\Administrator\\source\\repos\\c\\first\\" };
		char tmp[20];
		printf("������ ���� ���� �Է��ϼ��� : ");
		gets(tmp);
		if (tmp[0] == 's') break;

		strcat(DelRes, tmp);
		printf("\n[ %s ]\n", DelRes);
		
		int del = remove(DelRes);
		if (del == -1) {
			printf("\n��������\n");
		}
		else {
			printf("\n��������\n");
		}
	}
}
int main()
{
	FileWrite();
	FileOpen();
	FileDel();
}