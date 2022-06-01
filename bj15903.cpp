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

int N, M; //카드 수, 합체 횟수

priority_queue<ll, vector<ll>, greater<ll>> pq; //오름차순(작은 게 제일 앞에)



int main() {

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		ll num;
		scanf("%lld", &num);
		pq.push(num);
	}
	


	for (int i = 0; i < M; i++) {
		ll x = pq.top();
		pq.pop();
		ll y = pq.top();
		pq.pop();

		ll temp = x + y;
		pq.push(temp);
		pq.push(temp);
	}


	ll sum = 0;
	while(!pq.empty()) {
		ll t = pq.top();
		pq.pop();
		sum += t;
	}

	printf("%lld\n", sum);

	return 0;
}*/