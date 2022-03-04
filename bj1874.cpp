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
	int index = 0;
	stack<int> s;
	int arr[100010]; //수열
	vector<char> ans; //+-
	int N;



	scanf("%d", &N);

	
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}


	for (int i = 1; i <= N; i++) {
		s.push(i);
		ans.push_back('+');

		while (!s.empty() && s.top() == arr[index]) { //empty체크 먼저
			s.pop();
			ans.push_back('-');

			index++;
		}
	}


	if (!s.empty()) {
		printf("NO");
	}
	else {
		for (int i = 0; i < ans.size(); i++) {
			printf("%c\n", ans[i]);
		}
	}
	





	return 0;
}*/















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