#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100]; //s1 �޴� ���ڿ�, s2 �ҹ��� �����ؼ� �޴� ������;
    int s3[255] = { 0 }, i, len, len2;//s3���ڿ� �ʱ�ȭ, len s1���ڿ� ���� len s2���ڿ� ����;
    int diff = 'a' - 'A';//�빮�ڿ� �ҹ��� �� ����

    printf("���ڿ� �Է�:");
    gets(s1);

    len = strlen(s1);//(s1 ���ڿ� ����)

    for (i = 0; i < len; i++)
    {
        if (('A' <= s1[i]) && (s1[i] <= 'Z'))//���ڰ� �빮���̸� �ҹ��ڷ� ����
            s2[i] = s1[i] + diff;
        else if (('a' <= s2[i]) && (s2[i] <= 'z'))//���ڰ� �ҹ����̸� �״�� ���
            s2[i] = s1[i];
        else//�Ϲ� �����϶��� �״�� ���
            s2[i] = s1[i];
    }
    len2 = strlen(s2);//s2 ���ڿ� ����

    for (i = 0; i < len2; i++)
    {
        s3[s2[i]]++; // ����ִ� ���� ���� Ȯ��
    }

    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%2c", i);
    }
    printf("\n");
    for (i = 'a'; i <= 'z'; i++) {
        printf("%2d", s3[i]);
    }
}