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
int dp[100010];

int main() {
	int n;
	scanf("%d", &n);

	
	for (int i = 0; i <= n; i++) {
		dp[i] = i;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}




	printf("%d\n", dp[n]);

	return 0;
}*/