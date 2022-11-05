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
string s[101];
int n, mood;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> mood;

	if (mood == 1) { //원래대로
		for (int i = 0; i < n; i++) {
			cout << s[i] << "\n";
		}
	}
	else if (mood == 2) { //좌우반전
		for (int i = 0; i < n; i++) {
			for (int j = s[i].size() - 1; j >= 0; j--) {
				cout << s[i][j];
			}
			cout << "\n";
		}
	}
	else { //상하반전
		for (int i = n - 1; i >= 0; i--) {
			cout << s[i] << "\n";
		}
	
	}



	return 0;
}*/