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
		int n;
		cin >> n;

		if (n == 1) {
			cout << "#\n";
		}
		else {


			//첫번째 줄
			for (int i = 0; i < n; i++) {
				cout << "#";
			}
			cout << "\n";

			//2~n-1번째줄
			for (int k = 0; k < n - 2; k++) {
				cout << "#";

				for (int i = 0; i < n - 2; i++) {
					cout << "J";
				}

				cout << "#\n";
			}



			//n번째줄
			for (int i = 0; i < n; i++) {
				cout << "#";
			}
			cout << "\n";

		}
		cout << "\n";
	}



	return 0;
}*/