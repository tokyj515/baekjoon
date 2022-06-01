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
priority_queue<int> pq;

//가장 가치가 큰 것을 선물로 줌
//선물이 없다면 -1

int main() {
	int N;
	scanf("%d", &N);


	while (N--) {
		int num;
		scanf("%d", &num);

		if (num == 0) {
			if (!pq.empty()) {
				printf("%d\n", pq.top());
				pq.pop();
			}
			else {
				printf("-1\n");
			}
		
		}

		else {
			while (num--) {
				int n;
				scanf("%d", &n);

				pq.push(n);
			}
			
		}
	
	
	
	}



	return 0;
}*/