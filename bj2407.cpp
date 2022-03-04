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

//정수자료형을 넘어가는 것이라 
//스트링으로 구현해야함	
/*
long long dp[110][110];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < 101; i++) {
		dp[i][0] = 0;
		dp[i][1] = i;
	}


	for (int i = 2; i < 101; i++) {
		for (int j = 2; j < 101; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}

	printf("%lld\n", dp[n][m]);


	return 0;
}*/