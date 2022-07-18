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
#define _CRT_SECURE_NO_WARNINGS


/*

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int Max = 0;
	int t; 
	cin >> t;


	while (t--) {
		string s; 
		cin >> s;
		int cnt = 0;
		int len = s.length();


		len -= 2;
		for (int i = 0; i < len; i++) 
			if (s.substr(i, 3) == "for") 
				cnt++;
		len -= 2;
		for (int i = 0; i < len; i++) 
			if (s.substr(i, 5) == "while")
				cnt++;

		Max = max(Max, cnt);
	}

	cout << Max;
}*/