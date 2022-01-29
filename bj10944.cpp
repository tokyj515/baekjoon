

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

/*
void func(int start, int n) { //바깥에서 안쪽으로
	int end = 4 * n - 3;
	int i, s, b;

	if (start == 1) {
		printf("*");
		return;
	}


	for (i = start; i <= end; i++) {
		if (i == start || i == end) {
			for (s = 1; s <= end; s++) {
				printf("*");
			}
		}

		else {
			printf("*");
			for (b = 1; b <= end-2; b++) {
				printf(" ");
			}
			printf("*");
			func(start - 1, n);
		
		}
		printf("\n");
	
	}


	return;
}

int n;
int main() {

	
	scanf("%d", &n);
	

	func(n, n);


	return 0;
}*/