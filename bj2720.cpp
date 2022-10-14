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
		int quarter = 0, dime = 0, nickel = 0, penny = 0;
		int money;
		cin >> money;



		while (money > 0) {
			if (money >= 25) {
				money -= 25;
				quarter++;
			}
			else if (money >= 10) {
				money -= 10;
				dime++;
			}
			else if (money >= 5) {
				money -= 5;
				nickel++;
			}
			else if (money >= 1) {
				money -= 1;
				penny++;
			}
		}
		
		cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
	
	}



	return 0;
}*/