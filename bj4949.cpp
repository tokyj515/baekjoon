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

	while (true) {
		string str;
		getline(cin, str);

		bool check = true;
		stack<char> s;

		if (str == ".") {
			break;
		}

		//괄호가 있다면
		for (int i = 0; i < str.length(); i++) {

			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') {
					check = true;
					s.pop();
				}
				else {
					check = false;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') {
					check = true;
					s.pop();
				}
				else {
					check = false;
					break;
				}
			}

		}


		if (s.empty() && check) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}

	}


	return 0;
}*/