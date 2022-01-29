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
int dp[21];
int main() {
	int n;
	scanf("%d", &n);


	dp[0] = 0;
	dp[1] = 1;
	int i;
	for (i = 2; i <= n; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}

	printf("%d\n", dp[n]);


}*/