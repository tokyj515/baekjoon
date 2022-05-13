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
int N, M;
int r, c, direc;

int Map[51][51];
bool visited[51][51];

int ans = 0;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
//0: 북, 1: 동, 2: 남, 3: 서쪽
//0은 빈칸, 1은 벽


void dfs(int x, int y, int d, int sum) {
	
	//visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nd = (d + 3 - i) % 4; //정해진 방향으로 돌아야하니까
		int nx = x + dx[nd];
		int ny = y + dy[nd];


		if (nx < 0 || nx >= N || ny < 0 || ny >= M || Map[nx][ny] == 1) continue;

		if (!visited[nx][ny] && Map[nx][ny] == 0) {
			visited[nx][ny] = true;
			dfs(nx, ny, nd, sum+1);
		}
	
	}


	//이동할 곳이 없어서 후진해야할 경우
	int backIdx = d + 2 < 4 ? d + 2 : d - 2;
	int backx = x + dx[backIdx];
	int backy = y + dy[backIdx];

	if (0 <= backx && backx <= N && 0 <= backy && backy <= M) {
		if (Map[backx][backy] == 0) {
			dfs(backx, backy, d, sum);
		}
		else {
			printf("%d\n", sum);
			exit(0);
		}
	}


}



int main() {
	scanf("%d %d", &N, &M);
	scanf("%d %d %d", &r, &c, &direc);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &Map[i][j]);
			visited[i][j] = false;
		}
	}




	visited[r][c] = true;
	dfs(r, c, direc, 1);

	//printf("%d\n", ans);



	return 0;
}*/