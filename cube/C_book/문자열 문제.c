#include <stdio.h>
#include <string.h>

int main()
{
	char res[100] = { 0 };
	printf("moon�ڿ� �Է� : ");
	scanf("%s", res);

	int size = strlen(res);

	for (int i = size - 1; i >= 0; i--) {
		printf("%2c", res[i]);
	}

}