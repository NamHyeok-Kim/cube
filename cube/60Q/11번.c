#include <stdio.h>

int main()
{
	int o, t;
	scanf("%d %d", &o, &t);
	if (o + t < 140) {
		printf("%d ���հ�", o + t);
	}
	else {
		printf("%d �հ�", o + t);
	}
	return 0;
}