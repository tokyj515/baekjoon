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
	bool check = true;
	deque<int> dq;
	int n, k, m;
	scanf("%d %d %d", &n, &k, &m);

	
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}


	int count = 0;
	int temp;
	while (dq.empty() == 0) { //큐가 비어있지 않는 동안
		
		if (check) {
			for (int i = 0; i < k - 1; i++) {
				temp = dq.front();//맨앞
				dq.push_back(temp);//맨뒤
				dq.pop_front();
			}

			if (dq.size() > 1) {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
			else {
				printf("%d\n", dq.front());
				return 0;
			}
			count++;
		}

		else {
			for (int i = 0; i < k - 1; i++) {
				temp = dq.back();//맨앞
				dq.push_front(temp);//맨뒤
				dq.pop_back();
			}

			if (dq.size() > 1) {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
			else {
				printf("%d\n", dq.back());
				return 0;
			}
			count++;
		}

		if (count == m) {
			check = !check;
			count = 0;
		}

		
	}


	return 0;
}*/