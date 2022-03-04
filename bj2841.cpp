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
#define _CRT_SECURE_NO_WARNINGS

/*

int main() {
	//stack<pair<int, int>> s; //line flat
	stack<int> s[7];


	int count = 0;
	int N, P;
	int line, flat;

	scanf("%d %d", &N, &P);

	while (N--) {
		scanf("%d %d", &line, &flat);

		if (s[line].empty()) {
			s[line].push(flat);
			count++;
		}
		else {
			if (s[line].top() < flat) {
				s[line].push(flat);
				count++;
			}
			else if (s[line].top() == flat) {
				continue;
			}
			else if (s[line].top() > flat) {
				while (!s[line].empty() && s[line].top() > flat) {
					s[line].pop();
					count++;
				}
				if (!s[line].empty() && s[line].top() == flat) {
					continue;
				}

				s[line].push(flat);
				count++;
			}



		}



	}

	printf("%d\n", count);;


	return 0;
}*/