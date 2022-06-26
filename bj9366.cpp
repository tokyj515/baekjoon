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

	for (int i = 1; i <= t; i++) {
		string tri;
		int n[3];
		scanf("%d %d %d", &n[0], &n[1], &n[2]);
		//a, b, c
		sort(n, n + 3);

		cout << "Case #" << i << ": ";


		if (n[2] >= n[0]+n[1]) {
			cout << "invalid!" << "\n";
		}
		else {
			if (n[0] == n[1] && n[1] == n[2]) {
				cout << "equilateral" << "\n";
			}
			else if (n[1] == n[0] || n[1] == n[2] || n[2] == n[0]) {
				cout << "isosceles" << "\n";
			}
			else {
				cout << "scalene" << "\n";
			}
		
		}



	}


	return 0;
}*/