//�������� �����Ͷ�°��� �����͸� ����Ű�� �ִ� �������̴�.
//�����ϴ� ���: �ڷ��� **�����ͺ����̸�;

#include<stdio.h>

void main() {
	const char *ptrArray[2];
	const char **ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;
	printf("\n ptrArray[0]�� �ּ� (&ptrArray[0])=%u", &ptrArray[0]);
	printf("\n ptrArray[0]�� �� (ptrArray[0])=%u", ptrArray[0]);
	printf("\n ptrArray[0]�� ������ (*ptrArray[0])=%c", *ptrArray[0]);	
	printf("\n ptrArray[0]�� �������ڿ� (*ptrArray[0])=%s \n", *ptrArray);

	printf("\n ptrArray[1]�� �ּ� (&ptrArray[1]) =%u", &ptrArray[1]);
	printf("\n ptrArray[1]�� �� (ptrArray[1])=%u", ptrArray[1]);
	printf("\n ptrArray[1]�� ������ (*ptrArray[1])=%c", *ptrArray[1]);
	printf("\n ptrArray[1]�� �������ڿ� (*ptrArray[1])=%s \n", *(ptrArray+1));


	printf("\n ptrtptr�� �ּ� (&ptrptr) =%u", &ptrptr);
	printf("\n ptrtptr�� �� (ptrptr)=%u", ptrptr);
	printf("\n ptrtptr�� 1�� ������ ( *ptrptr)=%u", *ptrptr);
	printf("\n ptrtptr�� 2�� ������ (**ptrptr)=%c", **ptrptr);
	printf("\n ptrtptr�� 2�� �������ڿ� (**ptrptr)=%s ", *ptrptr);

	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[0] + i));
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[1] + i));
	printf("\n **(ptrptr+1) : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*(ptrptr + 1) + i));

	getchar();

}
