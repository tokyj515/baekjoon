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
		int arr[26] = { 0, };
		
		getline(cin, s);

		if (s == "*") break;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				continue;
			}
			else {
				arr[s[i] - 'a']++;
			}
		}

		int cnt = 0;
		

		for (int i = 0; i < 26; i++) {
			if (s[i] == 0) {
				cnt++;
			}
		}


		if (cnt > 0) {
			cout << "N" << "\n";
		}
		else {
			cout << "Y" << "\n";
		}
		
	
	}


	return 0;
}*/