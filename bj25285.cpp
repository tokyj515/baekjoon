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
		double h, w;
		double bmi = 0;

		cin >> h >> w;
		bmi = w / (h * h / 10000);
	
		if (h < 140.1) {
			cout << "6" << "\n";
		}
		else if (140.1 <= h && h < 146) {
			cout << "5" << "\n";
		}
		else if (146 <= h && h < 159) {
			cout << "4" << "\n";
		}


		else if (159 <= h && h < 161) {
			if (16.0 <= bmi && bmi < 35.0) {
				cout << "3" << "\n";
			}
			else {
				cout << "4" << "\n";
			}
		}


		else if (161 <= h && h < 204) {
			if (20.0 <= bmi && bmi < 25.0) {
				cout << "1" << "\n";
			}
			else if (18.5 <= bmi && bmi < 20.0) {
				cout << "2" << "\n";
			}
			else if (25.0 <= bmi && bmi < 30.0) {
				cout << "2" << "\n";
			}
			else if (16.0 <= bmi && bmi < 18.5) {
				cout << "3" << "\n";
			}
			else if (30.0 <= bmi && bmi < 35.0) {
				cout << "3" << "\n";
			}
			else {
				cout << "4" << "\n";
			}
		}


		else if (h >= 204) {
			cout << "4" << "\n";
		}
	}

	return 0;
}*/