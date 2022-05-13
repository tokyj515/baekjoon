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
#include <map>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> P;


/*

int main() {
	string num;
	cin >> num;
	bool check = false;


	int idx = 0;


	for (int i = 0; i < num.size() - 1; i++) {
		idx++;
		int front = 1;
		int rear = 1;

		for (int j = 0; j < idx; j++) {
			front *= num[j] - '0';
		}


		for (int j = idx; j < num.size(); j++) {
			rear *= num[j] - '0';
		}


		if (front == rear) {
			check = true;
			break;
		}
	}



	if (check) printf("YES");
	else printf("NO");


	return 0;
}*/