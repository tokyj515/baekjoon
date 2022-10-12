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
#include <map>
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> PII;

/*

//x: 1리터당 A엔
//y: 기본 B엔, C리터 이하면 B엔만, C리터 초과면 기본에 추가요금 추가 1리터당 D엔

int main() {
	int A, B, C, D, usedWater;
	int X, Y; //X, Y기업일 때 비용


	cin >> A >> B >> C >> D >> usedWater;

	X = A * usedWater;

	if (usedWater <= C) {
		Y = B;
	}
	else {
		Y = B + D * (usedWater - C);
	}

	if (X <= Y) {
		cout << X << "\n";
	}
	else {
		cout << Y << "\n";
	}


	return 0;
}*/