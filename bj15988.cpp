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
#include <functional>
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS


/*
long long dp[1000010]; //i가 나올 수 있는 경우의 수

int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		long long num, i;
		scanf("%lld", &num);

		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (i = 4; i <= num; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			dp[i] %= 1000000009;
		}

		printf("%lld\n", dp[num]);



	}



	return 0;
}*/