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
int n, m, i, t;


int binarySearch(int left, int right, int find, vector <int> &v) {
	int mid = (left + right) / 2;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (v[mid] == find) {
			return 1;
		}


		if (v[mid] < find) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return 0;

}



int main() {

	scanf("%d", &t);

	while (t--) {

		vector<int> v;


		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			int num;
			scanf("%d", &num);
			v.push_back(num);
		}
		sort(v.begin(), v.end());


		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			int num;
			scanf("%d", &num);
			
			printf("%d\n", binarySearch(0, n - 1, num, v));
		}
	
	}


	return 0;
}*/