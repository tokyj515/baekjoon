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
long long dp[1010][1010];
int n, k;
int mod = 10007;

int main() {
	scanf("%d %d", &n, &k);

	
	if (n == 0) { //n==0
		printf("0\n");
		return 0;
	}


	for (int i = 1; i <= n; i++) { //n >= 1
		for (int j = 0; j <= i; j++) {
			if (i == j || j == 0) {
				dp[i][j] = 1;
				//continue;
			}
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
			}

			

		}
	}


	printf("%lld\n", dp[n][k] );

	return 0;
}*/