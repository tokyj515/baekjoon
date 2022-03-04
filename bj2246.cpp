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
int main() {
	int count = 0;
	bool check;
	int n;
	scanf("%d", &n);

	vector<pair<int, int>> v(10001);

	int d, c;

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &v[i].first, &v[i].second);
	}

	for (int i = 0; i < n; i++) {
		check = true;

		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (v[i].first > v[j].first) {
					if (v[i].second >= v[j].second) {
						check = false;
						break;
					}
				}
				else if (v[i].second > v[j].second) {
					if (v[i].first >= v[j].first) {
						check = false;
						break;
					}
				}
			}
		}


		if (check) {
			count++;
		}

	}

	printf("%d\n", count);

	return 0;
}*/