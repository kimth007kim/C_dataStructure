#include<stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("���� �Է� :");
	scanf_s("%c", &grade);
	printf("�̸� �Է� :");
	scanf_s("%s", name);
	printf("%s�� ���� %c�Դϴ�.\n", name, grade);
}