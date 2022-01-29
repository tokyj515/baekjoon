
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
struct country {
	int c; //나라번호
	int g; //금
	int s; //은
	int b; //동
};

bool compare(country x, country y) {

	if (x.g == y.g && x.s == y.s)
		return x.b > y.b;
	if (x.g == y.g)
		return x.s > y.s;
	return x.g > y.g;

}
int main() {
	int n, k;

	scanf("%d %d", &n, &k);

	country country[1001];

	int i;
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &country[i].c, &country[i].g, &country[i].s, &country[i].b);
	}

	sort(country, country + n, compare); //금 은 동 순으로 정렬

	int rank = 1;
	if (country[0].c == k) {
		printf("%d\n", rank);
		return 0;
	}

	for (i = 1; i < n; i++) {

		if (country[i].g != country[i - 1].g || country[i].s != country[i - 1].s || country[i].b != country[i - 1].b) {
			rank = i + 1;
		}
			
		if (country[i].c == k) {
			printf("%d\n", rank);
			return 0;
		}
	
	
	}

	return 0;
}*/