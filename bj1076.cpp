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

int main() {
	map<string, pair<string, string>> m;
	m = {
		{"black", {"0", ""}},
		{"brown", {"1", "0"}},
		{"red", {"2", "00"}},
		{"orange", {"3", "000"}},
		{"yellow", {"4", "0000"}},
		{"green", {"5", "00000"}},
		{"blue", {"6", "000000"}},
		{"violet", {"7", "0000000"}},
		{"grey", {"8", "00000000"}},
		{"white", {"9", "000000000"}},
	};


	string ans = "";

	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;

		if (i != 2) {
			ans += m[s].first;
		}
		else {
			ans += m[s].second;
		}
	
	}

	cout << ans << "\n";

	return 0;
}


int main() {
	map<string, pair<int, int>> d1 = {
	{"black",{0,1}},{"brown",{1,10}},{ "red",{ 2,100 } },
	{ "orange",{ 3,1000 } },{ "yellow",{ 4,10000 } },{ "green",{ 5,100000 } },
	{ "blue",{ 6,1000000 } },{ "violet",{ 7,10000000 } },
	{ "grey",{ 8,100000000 } },{ "white",{ 9,1000000000 } } };

	string a, b, c;
	cin >> a >> b >> c; // 숫자 텍스트 
	string s1, s2, ss;
	s1 = to_string(d1[a].first);
	s2 = to_string(d1[b].first);
	ss = s1 + s2;

	unsigned long long number = stoi(ss); // 저항값
	cout << number * d1[c].second;

	return 0;
}
*/