#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus);

void quadratic(int a, int b, int c, double* xplus, double* xminus)
{
	*xminus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	*xplus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main() 
{
	int a, b, c;
	double xplus,  xminus;

	printf("a b c �Է� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	quadratic(a, b, c, &xplus, &xminus);
	
	printf("���̳ʽ� �� : %lf\n", xminus);
	printf("�÷��� �� : %lf\n", xplus);
	
	return 0;
} 