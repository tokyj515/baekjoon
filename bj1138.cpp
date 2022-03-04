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
	int n;
	scanf("%d", &n);
	int arr[11] = { 0, };

	for (int i = 0; i < n; i++) {
		int left;
		scanf("%d", &left);

		for (int j = 0; j < n; j++) { 
			if (left == 0 && arr[j] == 0) { //앞에 아무도 없음
				arr[j] = i + 1;
				break;
			}
			else if (arr[j] == 0) { //left가 0이 될 때까지 뒤로 이동
				left--;
			}

		}

	}


	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}





	return 0;
}*/