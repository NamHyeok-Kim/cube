#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	srand(time(NULL));
	
	char insa[3][20] = { "��", "��", "��÷"};
	char res[101];
	printf("�̸��Է� : ");
	scanf("%s", &res);
	
	int r;
	r = rand() % 3;

	printf("%s �� %s", res, insa[r]);
}