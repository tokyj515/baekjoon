
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
int dp[5001];

int main() {
	int n;
	scanf("%d", &n);
	fill_n(dp, 5001, 9999);

	dp[3] = 1;
	dp[5] = 1;

	int i;
	for (i = 6; i < 5001; i++) {
		dp[i] = min(dp[i - 3], dp[i - 5]) + 1;
	}

	if (dp[n] >= 9999) {
		printf("-1");
	}
	else {
		printf("%d", dp[n]);
	}

	return 0;
}*/