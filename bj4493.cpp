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
	int t;
	cin >> t;

	while (t--) {
		char a, b;
		int p1 = 0, p2 = 0;
		int test;
		cin >> test;

		while (test--) {
			cin >> a >> b;

			if (a == 'R') { //바위
				if (b == 'R') {
					continue;
				}
				else if (b == 'S') {
					p1++;
				}
				else if (b == 'P') {
					p2++;
				}
			}
			else if (a == 'S') { //가위
				if (b == 'R') {
					p2++;
				}
				else if (b == 'S') {
					continue;
				}
				else if (b == 'P') {
					p1++;
				}

			}
			else if (a == 'P') { //보
				if (b == 'R') {
					p1++;
				}
				else if (b == 'S') {
					p2++;
				}
				else if (b == 'P') {
					continue;
				}
			}
		}




		if (p1 > p2) {
			cout << "Player 1" << "\n";
		}
		else if (p1 < p2) {
			cout << "Player 2" << "\n";
		}
		else {
			cout << "TIE" << "\n";
		}
	
	
	}

	return 0;
}*/