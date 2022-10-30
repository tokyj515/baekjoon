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

	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;

		cout << "Distances: ";

		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] <= s2[i]) {
				cout << (s2[i] - '0') - (s1[i] - '0');
			}
			else {
				cout << (s2[i] - '0') - (s1[i] - '0') + 26;
			}

			if (i != s1.size() - 1) cout << " ";
			else cout << "\n";
		
		}
	}


	return 0;
}*/