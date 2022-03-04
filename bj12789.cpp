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

	stack<int> s;
	queue<int> q;

	int N;
	int num;
	//int max_val = N;
	int min_val = 1;
	int count = 0;


	scanf("%d", &N);
	while (N--) {
		scanf("%d", &num);
		q.push(num);
	}

	while (!q.empty()) {
		int temp = q.front();

		if (temp == min_val) {
			min_val++;
			q.pop();
		}
		else {
			if (!s.empty() && s.top() == min_val) {
				min_val++;
				s.pop();
			}
			else {
				s.push(temp);
				q.pop();
			}

		}
	}

	while (!s.empty()) {

		int temp = s.top();
		s.pop();


		if (temp == min_val) {
			min_val++;
			break;
		}

		else if (temp != min_val) {
			printf("Sad\n");
			return 0;
		}
	
	}
	printf("Nice\n");
	


	return 0;
}*/