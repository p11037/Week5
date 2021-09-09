#include<stdio.h>

int a[10], * p;

int main() {
	p = a;

	for (int i = 0; i < 10; i++) {

		scanf_s("%d", &a[i]);
	}

	while (*p < 10) {

		if (*(p - 1) % 2 != 0 && *(p + 1) % 2 != 0) {

			printf("%d ", *p);
			p++;
		}
		else p++;
	}
	return 0;
}