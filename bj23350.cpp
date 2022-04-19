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

int N, M; //컨테이너 개수, 우선순위 종류(최대 우선순위)
int ans = 0;

int main() {
	//적재공간(실제 적재순서대로 되어있어야할 곳)
	//나머지공간(적재공간에 순서대로 쌓기 위해 잠시 냅두는 공간)

	//우선순위가 큰 것부터 적재해야 하니까 less로 먼저
	//priority_queue <P> order; 

	//나머지 공간
	priority_queue <P> rest;

	queue<P> order; //<우선순위, 무게>

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		int p, w; // 각 컨테이너의 우선순위, 무게
		scanf("%d %d", &p, &w);
		order.push({ p, w });
	}

	int tempM = M;

	while (tempM--) {
		for (int i = 0; i < N; i++) {

			if (order.front().first != M) {
				int p = order.front().first;
				int w = order.front().second;
				order.push({ p, w });

			}

		}
	}


	printf("================================\n");
	for (int i = 0; i < order.size(); i++) {
		printf("%d %d\n", order.front().first, order.front().second);
		order.pop();
	}

	

}*/