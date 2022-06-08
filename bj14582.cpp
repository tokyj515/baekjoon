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

//울림제미니스가 역전패를 했는지? YES NO
//역전패가 성립하려먼 경기 중에 울림제미니스가 이기는 순간이 있어야 함 

//한 팀이 한 회에 낸 득점은 0~20 
//스타트링크의 총 득점 > 울림제미니스

/*
int je[10];
int st[10];

int main() {

	bool win = false;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &je[i]);
	}
	for (int i = 0; i < 9; i++) {
		scanf("%d", &st[i]);
	}

	int jScore = 0;
	int SScore = 0;
	for (int i = 0; i < 9; i++) {
		
		
		jScore += je[i];
		if (jScore > SScore) {
			win = true;
		}

		SScore += st[i];
		if (jScore > SScore) {
			win = true;
		}
	}

	if (win) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}





	return 0;
}*/