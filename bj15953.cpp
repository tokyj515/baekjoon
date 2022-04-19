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

vector<pair<int, int>> one(101); //등수, 상금 //1번째 인덱스부터
vector<pair<int, int>> two(65);


int one[101];
int two[65];

void setting() {

	one = {0, 5000000, 3000000, 3000000, 2000000, 2000000, 2000000, 500000, 500000, 500000, 500000,
			300000, 300000, 300000, 300000, 300000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 0,};



	two[1].first = 1;
	two[2].first = 3;
	two[3].first = 7;
	two[4].first = 15;
	two[5].first = 31;



	two[1].second = 5120000;
	two[2].second = 2560000;
	two[3].second = 1280000;
	two[4].second = 640000;
	two[5].second = 320000;
	
}

int main() {
	int result = 0;
	int t;
	int a, b;

	scanf("%d", &t);

	setting();

	while (t--) {
		
		scanf("%d %d", &a, &b);
		
		for (int i = 1; i <= 6; i++) {
			if (0 < a && a <= one[i].first) {
				result += one[i].second;
				continue;
			}
			
		}

		for (int i = 1; i <= 5; i++) {
			if (0 < b && b <= two[i].first) {
				result += two[i].second;
				continue;
			}
		}
	
		printf("%d\n", result);
		result = 0;
	}



	return 0;
}*/