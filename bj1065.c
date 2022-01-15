

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void) {
	int n;
	scanf("%d", &n);

	int hund, ten, one;

	hund = n / 100;
	ten = n % 100 - n % 10;
	one = n % 10;

	int d1, d2; //각 자리의 차이


	int count = 0;

	for (int i = 1; i <= n; i++) {
		hund = i / 100;
		ten = i % 100 - i % 10;
		one = i % 10;

		d1 = abs(hund - ten);
		d2 = abs(ten - one);

		if (d1 == d2) {
			count++;
		}
	}

	printf("%d\n", count);




	return 0;
}*/