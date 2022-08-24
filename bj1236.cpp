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
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> PII;


/*
int n, m; //n은 행, m은 열

int rowsize = 0; //비어있는 행의 갯수
int colsize = 0; //비어있는 열의 갯수

char mat[101][101]; //땅과 경비의 정보

int main() {
	cin >> n >> m;

	//n행 m열 땅과 경비의 정보 입력
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mat[i][j];
		}
	}

	//비어있는 행을 조사
	for (int i = 1; i <= n; i++) {
		bool check = true;
		for (int j = 1; j <= m; j++) { //i번째 행의 원소들을 조사
			if (mat[i][j] == 'X') { //경비가 있으면
				check = false; //flag를 false로 하고
				break; //탈출
			}
		}
		if (check) { //경비가 없으면
			rowsize++; //비어있는 행 갯수 증가
		}
	}

	//비어있는 열을 조사
	for (int j = 1; j <= m; j++) {
		bool check = true;
		for (int i = 1; i <= n; i++) { //j번째 열의 원소들을 조사
			if (mat[i][j] == 'X') { //경비가 있으면
				check = false; //flag를 false로 하고
				break; //탈출
			}
		}
		if (check) { //경비가 없으면
			colsize++; //비어있는 열 갯수 증가
		}
	}

	//비어있는 행의 갯수와 열의 갯수를 비교하여 더 큰 것을 답으로 출력
	if (rowsize > colsize) {
		cout << rowsize;
	}
	else {
		cout << colsize;
	}
}
*/

/*
int main() {
	int n, m;
	cin >> n >> m;

	int cnt = 0;

	while (n--) {
		string s;
		cin >> s;

		if (s.find('X') == string::npos) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}*/