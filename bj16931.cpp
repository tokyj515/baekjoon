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
#define _CRT_SECURE_NO_WARNINGS

/*
int map[110][110];
int dy[4] = { -1,0,1,0 }; 
int dx[4] = { 0,1,0,-1 };
//1씩 차이나게 초기화


int main() {
	int sum = 0;
	int n, m;
	scanf("%d %d", &n, &m);


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &map[i][j]);
		}
	}



	for (int y = 1; y <= n; y++) { //y
		for (int x = 1; x <= m; x++) { //x
			for (int k = 0; k < 4; k++) {
				int ny = y + dy[k];
				int nx = x + dx[k];

				int gap = map[y][x] - map[ny][nx];
				if (gap >= 0) {
					sum += gap;
				}
			}
		}
	}

	sum += 2 * n * m;



	printf("%d\n", sum);


	return 0;
}*/