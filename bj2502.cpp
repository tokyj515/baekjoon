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
int dp[35][2]; 

int main() {
	int d, k; //몇번째날, 떡개수

	scanf("%d %d", &d, &k);

	dp[1][1] = 1;
	dp[1][2] = 0;
	dp[2][1] = 0;
	dp[2][2] = 1;


	for (int i = 3; i <= d; i++) {
		dp[i][1] = dp[i - 2][1] + dp[i - 1][1];
		dp[i][2] = dp[i - 2][2] + dp[i - 1][2];
	}
	

	for (int i = 1; i <= k; i++) {
		if ((k - i * dp[d][1]) % dp[d][2] == 0) {
			int j = (k - i * dp[d][1]) / dp[d][2];

			if (i <= j) {
				printf("%d\n%d\n", i, j);
				return 0;
			}
			else if (k < i * dp[d][1] + j * dp[d][2]) {
				break;
			}


			

		
		}
	}



	return 0;
}*/