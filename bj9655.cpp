
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
int dp[1001];

int main() {

	int n;
	scanf("%d", &n);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 1;

	int i;
	for (i = 4; i < 1001; i++) {
		dp[i] = min(dp[i-1], dp[i-3])+1;
	}


	if (dp[n] % 2 == 1) {
		printf("SK");
	}
	else {
		printf("CY");
	}


	return 0;
}*/