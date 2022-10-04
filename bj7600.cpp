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
	string s;
	
	while (true) {
		int ans = 0;
		int cnt[26] = { 0, };
		getline(cin, s);
		

		if (s == "#") break;

		for (int i = 0; i < s.size(); i++) {
			if ('a' <= s[i] && s[i] <= 'z') {
				cnt[s[i] - 'a']++;
			}
			else if ('A' <= s[i] && s[i] <= 'Z') {
				cnt[s[i] - 'A']++;
			}
		}

		for (int i = 0; i < 26; i++) {
			if (cnt[i] > 0) ans++;
		}
		
		cout << ans << "\n";
	}


	return 0;
}*/