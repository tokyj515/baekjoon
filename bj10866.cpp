#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <deque>
#define _CRT_SECURE_NO_WARNINGS

/*
int main() {

	deque<int> dq;

	int n;
	scanf("%d", &n); //명령의 개수

	int x;
	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push_front") {
			scanf("%d", &x);
			dq.push_front(x);

		}
		else if (command == "push_back") {
			scanf("%d", &x);
			dq.push_back(x);

		}


		else if (command == "pop_front") {
			if (dq.empty() == 0) {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
			else {
				printf("-1\n");
			}

		}
		else if (command == "pop_back") {
			if (dq.empty() == 0) {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
			else {
				printf("-1\n");
			}

		}



		else if (command == "front") {
			if (dq.empty() == 0) {
				printf("%d\n", dq.front());
			}
			else {
				printf("-1\n");
			}

		}
		else if (command == "back") {
			if (dq.empty() == 0) {
				printf("%d\n", dq.back());
			}
			else {
				printf("-1\n");
			}

		}



		else if (command == "empty") {
			printf("%d\n", (dq.empty() ? 1 : 0));

		}
		else if (command == "size") {
			printf("%d\n", dq.size());

		}

	}




	return 0;
}*/