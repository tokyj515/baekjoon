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
#include <map>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> P;


/*
int dp[10000001];

int main() {
	int n;
	scanf("%d", &n);


	dp[1] = 0;
	dp[2] = 2;
	dp[3] = 3;

	for (int i = 4; i <= 10000001; i++) {
		dp[i] = (dp[i - 2] % 10 + dp[i - 1] % 10) % 10;
	}


	printf("%d\n", dp[n]);


	return 0;
}*/