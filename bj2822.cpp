
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
int main() {
	int i;
	vector<pair<int,int>> point(8); //Á¡¼ö ÀÎµ¦½º
	int total = 0;
	int ans_idx[5];

	for (i = 0; i < 8; i++) {
		scanf("%d", &point[i].first);
		point[i].second = i + 1;
	}

	sort(point.begin(), point.end(), greater<pair<int, int>>());


	for (i = 0; i < 5; i++) {
		total += point[i].first;
		ans_idx[i] = point[i].second;
	}

	sort(ans_idx, ans_idx + 5);

	printf("%d\n", total);
	for (i = 0; i < 5; i++) {
		printf("%d ", ans_idx[i]);
	}



	return 0;
}*/