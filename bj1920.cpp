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
int arr[100010];
int val;

int binarySearch(int left, int right, int find) {

	int mid = (left + right) / 2;

	if (arr[mid] == find) {
		return 1;
	}
	if (left > right) {
		return 0;
	}

	if (arr[mid] < find) {
		return binarySearch(mid + 1, right, find);
	}
	else {
		return binarySearch(left, mid - 1, find);
	}


}



int main() {
	int n, m;
	int i;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);


	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &val);
		printf("%d\n", binarySearch(0, n - 1, val));
	}




	return 0;
}*/