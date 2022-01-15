

#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//다이나믹 프로그래밍


/*
bool compare(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}


int main() {
	int n;
	scanf("%d", &n);

	vector<pair<int, int>> counseling(n); //7일 0~6
	int* check = new int[n]; //7일 0~6
	//가능:1 불가능:0

	//int time, pay;
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &counseling[i].first, &counseling[i].second);
	}

	for (i = n - 1; i >= 0; i--) {
		if (counseling[i].first + i > n) {
			check[i] = 0;
		}
		else {
			check[i] = 1;
		}

	}
	sort(counseling.begin(), counseling.end(),compare);

	for (i = 0; i < n; i++) {
		if (check[i] == 0) continue;

		for (j = i; j
	
	}



	printf("////////////////////");
	for (i = 0; i < n; i++) {
		printf("%d %d\n", counseling[i].first, counseling[i].second);
	}

}*/