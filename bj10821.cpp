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
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> P;


int main() {
	int ans = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',') {
			ans++;
		}

	}

	printf("%d\n", ans + 1);



	return 0;
}