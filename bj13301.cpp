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
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> PII;

/*
ll dp[81];

int main() {

	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i < 81; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	int num;
	cin >> num;

	ll total = dp[num] * 2 + (dp[num] + dp[num - 1]) * 2;

	cout << total << "\n";


	return 0;
}*/