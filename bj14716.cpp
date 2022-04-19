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
int M, N;
int map[251][251];
bool visited[251][251];

int dx[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int dy[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };

int ans = 0;

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx<0 || nx >M || ny<0 || ny>N) continue;

		if (visited[nx][ny] || map[nx][ny] == 0) continue;
		
		dfs(nx, ny);
	}


}




int main() {

	scanf("%d %d", &M, &N);

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}



	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			
			if (!visited[i][j] && map[i][j] == 1) {
				dfs(i, j);
				ans++;
			}
		}
	}
	

	printf("%d\n", ans);



	return 0;
}*/