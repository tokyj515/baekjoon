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
typedef pair<int, int> PII;


/*
int N, m, M, T, R;

int pulse = m;

int main() {
	cin >> N >> m >> M >> T >> R;

	if (M - m < T) {
		cout << -1 << "\n";
		return 0;
	}

	int time = 0;
	int pulse = m; //¸Æ¹Ú

	while (true) {
	
		if (pulse + T <= M) {
			pulse += T;
			N--;
		}
		else {
			pulse -= R;
			if (pulse < m) pulse = m;
		}

		time++;

		if (N == 0) {
			cout << time << "\n";
			return 0;
		}

		
	}



	return 0;
}


*/