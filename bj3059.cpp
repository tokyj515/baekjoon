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
		int sum = 0;
		int check[26] = { 0, };
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			check[s[i] - 'A'] = 1;
		}

		for (int i = 0; i < 26; i++) {
			if (check[i] != 1) {
				sum += i + 65;
			}
		}
			
		cout << sum << "\n";
	}


	return 0;
}*/