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
	string s;
	cin >> s;


	string ans = "";
	ans += s[0];
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == '-') {
			ans += s[i + 1];
		}
	}

	cout << ans << "\n";

	return 0;
}