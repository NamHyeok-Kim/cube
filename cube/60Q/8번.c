#include <stdio.h>

int main()
{
	int i = 0;
	int j[100];
	while (1) {
		scanf_s("%d", &j[i]);
		i++;
		printf("\n");
	}
	for (i = 0; ;i++){
		if (j[i] % 2 == 0) {
			printf("¦���Դϴ�");
		}
		else if (j[i] == NULL) {
			break;
		}
		else { 
			printf("Ȧ���Դϴ�");
		}
	}
}