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
int N;
char map[101][101];
bool visited[101][101] = { 0 };
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int cnt = 0;


void dfs(int x, int y) {
	visited[x][y] = true;
	
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

		if (map[x][y] == map[nx][ny] && !visited[nx][ny]) {
			//visited[nx][ny] = true;
			dfs(nx, ny);
		}
	}
}


int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", map[i]);;
	}

	//적록색약 아님
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	printf("%d ", cnt);


	//적록색약 맞음
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'G') 
				map[i][j] = 'R';
			else 
				map[i][j] = map[i][j];
		}
	}
	memset(visited, false, sizeof(visited));
	cnt = 0;


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	printf("%d", cnt);



	return 0;
}*/