#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <iomanip>
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
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
#define pi 3.14159265359
typedef pair<int, int> PII;


/*
int main() {
	int N, M;
	cin >> N >> M;

	int x1, y1, x2, y2, sum = 0;
	int arr[101][101] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x <= x2; x++) {
			for (int y = y1; y <= y2; y++)
				arr[x][y]++; // 입력된 좌표에 해당하는 인덱스에 모두 1씩 추가하기
		}
	}

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (arr[i][j] > M) // 입력한 M보다 크면 모자이크가 되었다는 뜻
				sum++;
		}
	}
	cout << sum;

}*/