#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;

	s.number = 20303;
	strcpy(s.name, "�賲��");
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %f\n", s.grade);
}