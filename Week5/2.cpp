#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {

	int b[10];

	scanf("%d", &b[0]);
	scanf("%d", &b[1]);
	scanf("%d", &b[2]);
	scanf("%d", &b[3]);
	scanf("%d", &b[4]);
	scanf("%d", &b[5]);
	scanf("%d", &b[6]);
	scanf("%d", &b[7]);
	scanf("%d", &b[8]);
	scanf("%d", &b[9]);

	for (int i = 0; i < 10; i++) {

		if (b[i - 1] % 2 != 0 && b[i + 1] % 2 != 0)
			printf("%d ", b[i]);

	}
	return 0;
}