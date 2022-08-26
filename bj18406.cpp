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
	cin >> s;

	int left = 0, right = 0;

	//6
	//0 1 2 3 4 5

	for (int i = 0; i < s.size() / 2; i++) { //0 1 2
		left += s[i] - '0';
	}
		
	for (int i = s.size() - 1; i >= s.size() / 2; i--) { //5 4 3
		right += s[i] - '0';
	}


	if (left == right) cout << "LUCKY" << "\n";
	else cout << "READY" << "\n";

	return 0;
}*/
