#include<stdio.h>
#include<string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

void main() {
	int i;
	struct employee Lee[4] = {
		{"�̹μ�",2002,3200},
		{"�̻��",2002,3000},
		{"����ȣ",2004,2500},
		{"���ѿ�",2003,2900},
	};
	for (i = 0; i < 4; i++) {
		printf("\n �̸� : %s",Lee[i].name);
		printf("\n �̸� : %d", Lee[i].year);
		printf("\n �̸� : %d \n", Lee[i].pay);

	}
	getchar();
}