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
int R, C;
char map[251][251];
int visited[251][251] = { 0 };

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int s = 0, sheep = 0;
int w = 0, wolf = 0;

void dfs(int y, int x) {
	visited[y][x] = true;

	if (map[y][x] == 'o') s++;
	else if (map[y][x] == 'v') w++;


	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;


		if (!visited[ny][nx] && map[ny][nx] != '#') {
			visited[ny][nx] = true;

			dfs(ny, nx);
		}
		
	}

}


int main() {
	scanf("%d %d", &R, &C);

	for (int i = 0; i < R; i++) {
		scanf("%s", map[i]);
	}


	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (!visited[i][j] && map[i][j] != '#') {
				visited[i][j] = true;

				dfs(i, j);

				if (s > w) {
					sheep += s;
				}
				else {
					wolf += w;

				}

				s = 0; w = 0;
			}
		}
	}

	printf("%d %d\n", sheep, wolf);


	return 0;
}*/