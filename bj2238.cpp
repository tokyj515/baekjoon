

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
bool compare(int a, int b) { //내림차순
	return a > b;
}

int main() {
	int U, N;
	scanf("%d %d", &U, &N);

	vector<pair<string, int>> v(N);
	vector<int> price(U+1); 
	vector<int> count(U + 1);//상한가 크기만큼 벡터 생성

	int i;
	for (i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
		price[v[i].second]++;
	}

	//sort(price.begin(), price.end(), compare);

	int min_price = 100001;

	for (i = 1; i <= 10000; i++) {
		if (price[i] > 0) {
			min_price = min(min_price, price[i]);
		}
	}

	for (i = 1; i <= 10000; i++) {
		if (price[i] == min_price) {
			count.push_back(i);
		}
	}	

	sort(count.begin(), count.end());

	for (i = 0; i < N; i++) {
		if (v[i].second == count[0]) {
			cout << v[i].first << " " << v[i].second;
			break;
		}
	}


	return 0;
}*/