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
struct Info {
	int s, t, cnt;
};

int main(void) {
	int test;
	cin >> test;

	while (test--) {
		int s, t;
		cin >> s >> t;

		queue<Info> q;
		q.push({ s, t, 0 });

		while (!q.empty()) {

			Info now = q.front();
			q.pop();

			if (now.s > now.t)
				continue;

			if (now.s == now.t) {
				cout << now.cnt << '\n';
				break;
			}

			Info next = { now.s * 2, now.t + 3, now.cnt + 1 };
			q.push(next);
			next = { now.s + 1, now.t, now.cnt + 1 };
			q.push(next);
		}
	}

	return 0;
}*/