

#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	int count = 0;
	int prime = 0;

	int* num = new int[n]; //소수를 담을 배열

	int i, j;
	for (i = m; i <= n; i++) {
		num[i] = i;
	}




	for (i = m; i <= n; i++) {
		if (num[i] == 1)continue;
		for (j = i*2; j <= sqrt(num[i]); j++) {
			if (num[i] % j == 0) count++;
		}
		if (count == 1) {
			printf("%d\n", num[i]);
		}
		count = 0;
	}


	return 0;
}