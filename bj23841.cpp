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

int main() {
	char map[55][55];
	int N, M;

	scanf("%d %d", &N, &M);
	

	//�Է�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}


	//��Ī�����
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) { 
			if (map[i][j] != '.') {
				map[i][M - j - 1] = map[i][j];
			}
	

		}


	}


	//���
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%c", map[i][j]);
		}
		printf("\n");
	}



	return 0;
}*/