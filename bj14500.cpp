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
int map[510][510];
bool visited[510][510];
int N, M; //세로, 가로
int ans = 0;
int tempSum = 0;

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };




void dfs(int y, int x, int sum, int depth){ 

    if (depth == 3) {
        ans = max(ans, sum);
        return;
    }

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
        if (visited[ny][nx]) continue;

        visited[ny][nx] = true;
        dfs(ny, nx, sum + map[ny][nx], depth + 1);
        visited[ny][nx] = false;
    }
}


void otherShape(int y, int x) {
    if (y + 1 < N && x + 2 < M) {  // ㅜ
        tempSum = map[y][x] + map[y][x + 1] + map[y][x + 2] + map[y + 1][x + 1];
        ans = max(ans, tempSum);
    }

    if (y + 2 < N && x + 1 < M) { // ㅏ
        tempSum = map[y][x] + map[y + 1][x] + map[y + 1][x + 1] + map[y + 2][x];
        ans = max(ans, tempSum);
    }

    if (y - 1 >= 0 && x + 2 < M) {// ㅗ
        tempSum = map[y][x] + map[y][x + 1] + map[y][x + 2] + map[y - 1][x + 1];
        ans = max(ans, tempSum);
    }
   
    if (y + 2 < N && x - 1 >= 0) { // ㅓ
        tempSum = map[y][x] + map[y + 1][x] + map[y + 1][x - 1] + map[y + 2][x];
        ans = max(ans, tempSum);
    }
            
}


int main() {
   
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &map[i][j]);
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
       
            otherShape(i, j);

            visited[i][j] = true;
            dfs(i, j, map[i][j], 0);
            visited[i][j] = false;
        }
    }

    printf("%d\n", ans);

    return 0;
}*/




/*
void func(int y, int x) {

    otherShape(y, x);

    visited[y][x] = true;
    dfs(y, x, map[y][x], 0);
    visited[y][x] = false;
}*/