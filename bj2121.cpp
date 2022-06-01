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


set<PII> s;
vector<PII> v;
int N;
int x, y;

int main() {

	scanf("%d %d %d", &N, &x, &y);
	//v.resize(N);


	for (int i = 0; i < N; i++) {
		int a, b;
		scanf("%d %d", &a, &b);

		v.push_back({ a, b });
		s.insert({ a, b });
	}



	int ans = 0;
	int a, b;

	for (int i = 0; i < N; i++) {

		a = v[i].first;
		b = v[i].second;

		if (s.find({ a + x, b }) == s.end())continue;
		if (s.find({ a, b + y }) == s.end())continue;
		if (s.find({ a + x, b + y }) == s.end())continue;

		ans++;
	}


	printf("%d\n", ans);


	return 0;
}*/