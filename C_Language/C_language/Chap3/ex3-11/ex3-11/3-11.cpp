#include<stdio.h>

int main(void)
{
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� :");
	scanf_s("%d%lf", &age, &height);
	printf("���̴� %d��,Ű�� %.1lfcm�Դϴ�\n",age,height);

	return 0;
}