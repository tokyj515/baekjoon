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
	deque<char> dq;
	string ans = "";

	int t;
	scanf("%d", &t);


	int N;
	char alp[1010];

	while(t--) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			cin >> alp[i];
		}

		char front = alp[0];
		char rear = alp[0];
		dq.push_back(front);

		for (int i = 1; i < N; i++) {

			if (alp[i] <= front) {
				dq.push_front(alp[i]);
				front = alp[i];
			}
			else {
				dq.push_back(alp[i]);
				rear = alp[i];
			
			}
		
		}

		ans = "";

		while (!dq.empty()) {
			char temp = dq.front();
			dq.pop_front();

			ans += temp;
		}
	
	
		cout << ans << "\n";
	
	
	
	}



	return 0;
}*/