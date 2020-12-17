#include<stdio.h>

int main(void)
{
	int a;		//int형 변수 선언
	int b, c;	//두 개의 int형 변수를 동시에 선언
	double da;	//double형 변수 선언
	char ch;	//char형 변수 선언

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 :  %d\n", a);
	printf("변수 b의 값 :  %d\n", b);
	printf("변수 c의 값 :  %d\n", c);
	printf("변수 da의 값 :  %.1lf\n", da);
	printf("변수 ch의 값 :  %c\n", ch);

	return 0;
}