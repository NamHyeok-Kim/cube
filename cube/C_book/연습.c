#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;
	int size;
	printf("�迭 ������ : ");
	scanf("%d", &size);

	pi = (int)malloc(size * sizeof(int));
	if (pi == NULL) {
		printf("�޸� �Ҵ� ���� .\n");
		exit(0);
	}
	for (int i = 0; i < size; i++) {
		pi[i] = i + 1;
		printf("%d", pi[i]);
	}

	free(pi);
	return 0;
}