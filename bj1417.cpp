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


/*
priority_queue<int> pq;

int main() {


	int N, cnt = 0, target, vote;
	cin >> N;
	cin >> target;
	N--;

	while (N--) {
		cin >> vote;
		if (vote >= target) 
			pq.push(vote);
	}

	while (!pq.empty() && pq.top() >= target) {
		int vote = pq.top();
		pq.pop();


		vote--; 
		cnt++; 
		target++;


		pq.push(vote);
	}

	cout << cnt << "\n";

	return 0;
}
*/