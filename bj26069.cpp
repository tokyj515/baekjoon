#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <iomanip>
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
map<string, bool> m;

int main() {
	string s1, s2;
	int t;
	cin >> t;


	while (t--) {
		cin >> s1 >> s2;
		m.insert({ s1, 0 });
		m.insert({ s2, 0 });



		if (s1 == "ChongChong") {
			m[s1] = 1;
		}
		else if (s2 == "ChongChong") {
			m[s2] = 1;
		}
		

		if (m[s1] && !m[s2]) {
			m[s2] = true;
		}
		else if (!m[s1] && m[s2]) {
			m[s1] = true;
		} 
		//나머지는 패스


	}


	int cnt = 0;
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}*/