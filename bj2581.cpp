
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
//에라토스테네스의 체 
//내가 원하는 방식으로 구현해둔 것!!!!
int main() {
	int sum = 0;
	int min_val;
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);

	
	bool prime[10000];
	fill_n(prime, 10000, 1); //true로 초기화
	prime[0] = false;
	prime[1] = false;

	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (prime[i] == true) {
			for (int j = i * 2; j <= n; j += i)
				prime[j] = false;
		}
	}


	for (i = m; i <= n; i++) {
		if (prime[i] == true) {
			if (sum == 0) {
				min_val = i;
			}
			sum += i;
		}
	}


	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n%d\n", sum, min_val);
	}

	

	return 0;
}*/