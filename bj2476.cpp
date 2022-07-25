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

int main() {
	int t;
	cin >> t;

	int ans = 0;
	int temp = 0;
	

	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == b && b == c) { //눈이 모두 같은 경우
			temp = 10000 + a * 1000;
		}
		else if (a != b && b != c && c != a) { //눈이 모두 다른 경우
			a = max({ a, b, c });
			temp = a * 100;
		}
		else {
			if (a == b) {
				temp = 1000 + a * 100;
			}
			else if (b == c) {
				temp = 1000 + b * 100;
			}
			else if (c == a) {
				temp = 1000 + c * 100;
			}
		}

		ans = max(temp, ans);
	}


	cout << ans;


	return 0;
}*/