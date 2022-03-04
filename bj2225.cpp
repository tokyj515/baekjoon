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
int N, K;
int dp[210][210];
int mod = 1000000000;

int main() {

	scanf("%d %d", &N, &K);

	for (int i = 0; i <= K; i++) {
		dp[0][i] = 1;
		
	}



	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {

			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
			
		}
		
	}


	printf("%d\n", dp[N][K]);






	return 0;
}*/