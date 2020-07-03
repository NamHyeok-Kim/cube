#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	int **a;
	int c, r, cnt = 0, sign = 1, n;
	int x = 0, y = 0;

	scanf("%d %d", &c, &r);
	scanf("%d", &n);

	a = (int*)malloc(sizeof(int) * c);
	for (int i = 0; i < c; i++) {
		a[i] = (int**)malloc(sizeof(int*) * r);
	}
	y = c;
	for (int i = 0; i < r; ++i) {
		a[y][x] = cnt++;
		y += sign;
	}
	y -= 1;
	for (int i = c - 1; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			y += sign;
			a[y][x] = cnt++;
		}
		sign *= -1;
		for (int k = 0; k < i; ++k) {
			x += sign;
			a[y][x] = cnt++;
		}
	}
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
