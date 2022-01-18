

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
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS

/*
int n, m;
int visited[9]; //Max=8
int ans[9];

void go(int start) {
	int i;
	if (start == m) {
		for (i = 0; i < m; i++) {
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}



	for (i = 1; i <= n; i++) {

		if (visited[i] == 0) {
			visited[i] = 1;
			ans[start] = i;

			go(start + 1);

			visited[i] = 0;
			ans[start] = 0;
		}
	
	
	}


	return;

}

int main() {
	scanf("%d %d", &n, &m);

	//1부터 n까지 길이가 m
	go(0);



	return 0;
}*/