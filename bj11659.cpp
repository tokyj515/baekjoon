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
int arr[100001];
int dp[100001];
int n, t;
int a, b;

int main() {
	cin >> n >> t;

	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		dp[i] = dp[i - 1] + arr[i];
	}



	while (t--) {
		int sum = 0;
		scanf("%d %d", &a, &b);

		sum = dp[b] - dp[a - 1];


		printf("%d\n", sum);

	}




	return 0;
}*/