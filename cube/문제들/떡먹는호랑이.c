#include <stdio.h>

fibo(int day, int dd, int o, int t)
{
	int tmp = 0;
	for (int i = 0; i < day; i++) {
		tmp = t;
		o = t;
		t = tmp;
	}
	if (tmp == dd) {
		return 0;
	}
	else return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++) {
		for (int j = i; j < a; j++) {
			if (fibo(a, b, i, j) == 0) {
				printf("%d %d", i, j);
				break;
			}
		}
	}
}