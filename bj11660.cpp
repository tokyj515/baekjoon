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
int dp[1030][1030];
int num[1030][1030];
int N, M;
int i, j, k;

int main() {
	scanf("%d %d", &N, &M);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			scanf("%d", &num[i][j]);
		}
	}

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + num[i][j];
		}
	}

	int x1, y1, x2, y2;
	while (M--) {

		scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
	
	
		long long sum = dp[y2][x2] - dp[y1 - 1][x2] - dp[y2][x1 - 1] + dp[y1 - 1][x1 - 1];

		printf("%lld\n", sum);
	
	}


	return 0;
}
*/

/*int x1, y1, x2, y2;
	while (M--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
		int w = y2 - y1;
		int h = x2 - x1;

		for (i = x1; i <= x1 + w; i++) {
			for (j = y1; j <= y1 + h; j++) {
				sum += num[i][j];
			}
		}
	
		printf("%d\n", sum);
		

		sum = 0;
		w = 0;
		h = 0;
	}
*/