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
int w, h;
int map[50][50];
bool visited[50][50] = { 0 };
//int dx[8] = { 0, 0, -1, 1, -1, -1, 1, 1 };
//int dy[8] = { 1, -1, 0, 0, -1, 1, -1, 1 };
int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

int ans = 0; //섬 개수



void dfs(int y, int x) {
	visited[y][x] = true;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;

		//0 <= nx && nx < w && 0 <= ny && ny < h 

		if (map[ny][nx] == 1 && !visited[ny][nx]) {
			visited[ny][nx] = 1;
			dfs(ny, nx);
		}
	}


}


int main() {
	
	while (true) {
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0) break;
	

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				scanf("%d", &map[i][j]);
			}
		}



		for (int i = 0; i < h; i++) { //브루트포스
			for (int j = 0; j < w; j++) {
				if (!visited[i][j] && map[i][j] == 1) {
					visited[i][j] = true;
					dfs(i, j);
					ans++;
				}
			}
		}


		printf("%d\n", ans);

		ans = 0;
		memset(map, false, sizeof(map));
		memset(visited, false, sizeof(visited));

	}



	return 0;
}*/