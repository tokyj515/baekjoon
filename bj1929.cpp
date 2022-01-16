
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
#define _CRT_SECURE_NO_WARNINGS


/*
//에라토스테네스의 체
int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	
	int i, j;
	int num[1000001] = {}; // 0으로 초기화

	for (int i = 2; i <= n; i++) {
		num[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		if (num[i] == 0) continue;
		for (int j = 2 * i; j <= n; j += i) {
			num[j] = 0;
		}
	}

	for (int i = m; i <= n; i++) {
		if (num[i] != 0) cout << num[i] << "\n";
	}



	return 0;
}*/