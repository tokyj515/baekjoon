
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
int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, x;
	string command;
	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++)	{
		cin >> command;

		if (command == "push") {
			cin >> x;
			q.push(x);
		}

		else if (command == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else cout << -1 << '\n';
		}

		else if (command == "size") {
			cout << q.size() << '\n';
		}

		else if (command == "empty") {
			cout << q.empty() << '\n';
		}

		else if (command == "front") {
			if (!q.empty()) 
				cout << q.front() << '\n';
			else cout << -1 << '\n';
		}

		else if (command == "back") {
			if (!q.empty())
				cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
	}

	return 0;
}*/