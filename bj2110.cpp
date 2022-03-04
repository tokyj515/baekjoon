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
int main() {
	int n, c;
	int ans = 1;
	vector<int> house;

	scanf("%d %d", &n, &c);


	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		house.push_back(x);
	}

	sort(house.begin(), house.end());


	int left = 1;
	int right = house[n - 1] - house[0];
	int count = 0;


	while (left <= right) {
		int mid = (left + right) / 2;
		int pre = house[0];
		count = 1;


		for (int i = 1; i < n; i++) {
			if (house[i] - pre >= mid) {
				count++;
				pre = house[i];
			}
			
		}
	
		
		if (count >= c) {
			ans = max(ans, mid);
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	
	
	}


	printf("%d\n", ans);

	return 0;
}*/