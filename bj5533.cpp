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
int num[201][4];
int check[201][4];
int score[201];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < 4; j++) {
			cin >> num[i][j];
		}
	}



	for (int j = 1; j < 4; j++) {
		for (int i = 1; i <= n; i++) {

			int cnt = 0;
			for (int r = 1; r <= n; r++) {
				if (num[i][j] == num[r][j] && i != r) {
					cnt++;
					break;
				}
			}
			if (!cnt) {
				score[i] += num[i][j];
			}

		}
	}

	for (int i = 1; i <= n; i++) {
		cout << score[i] << "\n";
	}

	return 0;
}*/