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
int main() {
	int t;
	scanf("%d", &t);

	int n, m, importance;
	int i;

	while (t--) {
		int count = 0;

		scanf("%d %d", &n, &m);

		queue<pair<int, int>> q;
		priority_queue<int> pq; //우선순위큐 내림차순

		for (i = 0; i < n; i++) {
			scanf("%d", &importance);
			q.push({ i, importance });
			pq.push(importance);
		}
	
		
		while (!q.empty()) {

			int index = q.front().first;
			int value = q.front().second;
			q.pop();

			if (pq.top() == value) {
				pq.pop();
				count++;

				if (m == index) {
					printf("%d\n", count);
					break;	
				}

			}
			else {
				q.push({ index, value });
			}
		
		}
	
	}





	return 0;
}*/