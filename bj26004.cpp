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
int arr[26];
int cnt = 0;


int main() {
	int n;
	string s;
	cin >> n >> s;


	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'H' || s[i] == 'I' || s[i] == 'A' || s[i] == 'R' || s[i] == 'C') {
			arr[s[i] - 'A']++;
		}
	}



	int minVal = 1000000;

	//5글자 전부 있는지 체크
	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0) cnt++;
	}


	if (cnt == 5) {

		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0 && arr[i] < minVal) {
				minVal = arr[i];
			}
		}

		cout << minVal << "\n";
		
	}
	else {
		cout << "0" <<  "\n";
	}



	return 0;
}*/