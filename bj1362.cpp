#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <iomanip>
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
	int o, w; //적정체중, 실제체중
	char action;
	int minute;


	for (int i = 1; ; i++) {
		bool die = false;
		cin >> o >> w;
		if (o == 0 && w == 0) break;

		while (true) {
			cin >> action >> minute;
			if (action == '#' && minute == 0) break;


			if (!die) {

				if (action == 'E') {
					w -= minute;
				}
				else if (action == 'F') {
					w += minute;
				}
			
			}

			if (w <= 0) {
				die = true;
			}



		}
	
		if (o /2 < w && w< o*2) {
			cout << i << " :-)" << "\n";
		}
		else if(w <= 0) {
			cout << i << " RIP" << "\n";
		}
		else {
			cout << i << " :-(" << "\n";
		}
	}



	return 0;
}*/