#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE  1000

int main()
{
	int* p = NULL;
	
	p = (int*)malloc(SIZE);
	if (p == NULL) {
		printf("�Ÿ� �Ҵ� ����\n");
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		p[i] = rand();
	}

	int max = p[0];
	for (int i = 0; i < SIZE; i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}

	printf("�ִ� : %d \n", max);
	free(p);

	return 0;
}