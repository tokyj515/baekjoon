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
int dp[1010];//1~1000

int main() {
	int mod = 1000000007;
	int n;
	int t;
	scanf("%d", &t);



	for (int i = 1; i <= 1000; i++) {
		if (i % 3 != 0) {
			dp[i] = 0;
		}
	}

	dp[3] = 3;

	int count = 1;

	for (int i = 9; i <= 1000; i+=3) {
		dp[i] = (dp[i - 3] +10*count) % mod;
		count++;
	}



	while (t--) {
		scanf("%d", &n);
	
		printf("%d\n", dp[n]);
	}





	return 0;
}*/