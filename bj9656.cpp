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
int dp[1001];

int main() { 
	//상근이를 기준으로 
	//이기면 1, 지면 0

	int N;
	scanf("%d", &N);

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 0;


	for (int i = 4; i < 1001; i++) {
		//dp[i] = min(dp[i - 1], dp[i - 3]) + 1;
		
		if (min(dp[i - 1], dp[i - 3]) == 1) {
			dp[i] = 0;
		}
		else {
			dp[i] = 1;
		}
	
	}


	if (dp[N] == 1) {
		printf("SK");
	}
	else {
		printf("CY");
	}



	return 0;
}


*/