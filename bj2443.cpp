#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int n;
	scanf("%d", &n);

	int s, b, i;


	for (i = 1; i <= n - 1; i++) {

		for (b = 1; b <= n - i; b++) {
			printf(" ");
		}

		for (s = 1; s <= 2 * i - 1; s++) {
			printf("*");
		}
		printf("\n");

	}






	for (s = 1; s <= 2 * n - 1; s++) {
		printf("*");
	}
	printf("\n");


	for (i = n - 1; i >= 1; i--) {

		for (b = 1; b <= n - i; b++) {
			printf(" ");
		}

		for (s = 1; s <= 2 * i - 1; s++) {
			printf("*");
		}
		printf("\n");

	}

	return 0;
}