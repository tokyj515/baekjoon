#pragma warning(disable : 4996)
using namespace std;

#include <iostream>
#include <string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#define _CRT_SECURE_NO_WARNINGS

/*
int main() {

	stack<int> s; //정수형 스택 s

	int n;
	scanf("%d", &n); //명령의 개수

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;

		if (command == "push") {
			int x;
			scanf("%d", &x);
			s.push(x);
		
		}
		else if (command == "pop") {
			if (s.empty() == 0) {
				printf("%d\n", s.top());
				s.pop();
			}
			else {
				printf("-1\n");
			}
		
		}
		else if (command == "top") {
			if (s.empty() == 0) {
				printf("%d\n", s.top());
			}
			else {
				printf("-1\n");
			}

		}
		else if (command == "empty") {
			printf("%d\n", (s.empty() ? 1 : 0));

		}
		else if (command == "size") {
			printf("%d\n", s.size());

		}
	
	}




	return 0;
}*/