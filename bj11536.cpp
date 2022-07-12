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
	vector<string> original;
	vector<string> sorting;
	int t;
	cin >> t;

	while (t--) {
		string name;
		cin >> name;

		original.push_back(name);
		sorting.push_back(name);
	}

	sort(sorting.begin(), sorting.end());

	bool inc = false, dec = false;
	//1:오름차순 2:내림차순 3:아무것도 아님

	for (int i = 0; i < original.size(); i++) {
		if (original[i] == sorting[i]) {
			inc = true;
		}
		else if (original[i] == sorting[original.size() - i - 1]) {
			dec = true;
		}
		
	}

	if (inc) {
		cout << "INCREASING" << "\n";
	}
	else if (dec) {
		cout << "DECREASING" << "\n";
	}
	else {
		cout << "NEITHER" << "\n";
	}


	return 0;
}*/