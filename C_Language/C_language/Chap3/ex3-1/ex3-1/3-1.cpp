#include<stdio.h>

int main(void)
{
	int a;		//int�� ���� ����
	int b, c;	//�� ���� int�� ������ ���ÿ� ����
	double da;	//double�� ���� ����
	char ch;	//char�� ���� ����

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("���� a�� �� :  %d\n", a);
	printf("���� b�� �� :  %d\n", b);
	printf("���� c�� �� :  %d\n", c);
	printf("���� da�� �� :  %.1lf\n", da);
	printf("���� ch�� �� :  %c\n", ch);

	return 0;
}