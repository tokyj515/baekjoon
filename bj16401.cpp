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
long long snack[1000010];

int main() {
	long long ans = 0;
	long long low = 1;
	long long high = 0;

	int n, m;
	scanf("%d %d", &m, &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &snack[i]);
		high = max(high, snack[i]);
	}


	while (low <= high) {
		long long mid = (low + high) / 2;
		long long count = 0;
		

		for (int i = 0; i < n; i++) {
			count += snack[i] / mid;
		}

		if (count >= m) {
			ans = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
		
	}


	printf("%lld\n", ans);



	return 0;
}*/