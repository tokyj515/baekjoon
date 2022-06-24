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
int a, b, c;

ll f(ll y) {
	if (y == 1) return a % c;

	ll k = f(y / 2) % c;

	if (y % 2 == 0) 
		return k * k % c;
	else 
		return k * k % c * a % c;
}

int main() {
	cin >> a >> b >> c;

	cout << f(b) << "\n";


	return 0;
}*/