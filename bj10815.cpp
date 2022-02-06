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
int arr[500010];
int arr2[500010];
int n, m, i, val;

int binarySearch(int left, int right, int find) {
	
	while (left <= right) {
			
		int mid = (left + right) / 2;

		if (arr[mid] == find) {
			return 1;
		}

		if (arr[mid] > find) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}	
	}

	return 0;

}

int main() {
	int n, m, i, val;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);


	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
		
	}


	for (i = 0; i < m; i++) {
		printf("%d ", binarySearch(0, n - 1, arr2[i]));
	}



	return 0;
}*/