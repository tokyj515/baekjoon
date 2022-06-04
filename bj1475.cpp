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
int check[10]; //1부터 8까지, 6이랑 9는 6에 같이 체크

int main() { 
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		check[s[i] - '0']++;
	}

	int num = 0;
	for (int i = 0; i < 10; i++) {
		if (i != 9 && i != 6)
			num = max(num, check[i]); 
	}

	cout << max(num, (check[6] + check[9] + 1) / 2);

	return 0; 
}*/
