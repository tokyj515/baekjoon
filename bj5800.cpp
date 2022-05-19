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

int main() {
	int t;
	scanf("%d", &t);

	for(int k=1; k<=t; k++){

		int n;
		scanf("%d", &n);

		vector<int> score(n);
		int Max = 0;
		int Min = 100;

		for (int i = 0; i < n; i++) {
			int s;
			scanf("%d", &s);
			score.push_back(s);

			if (s > Max) Max = s;
			if (s < Min) Min = s;
		}

		sort(score.begin(), score.end(), greater<>()); //내림차순




		int max_gap = 0;
		for (int j = 0; j < n - 1; j++) {
			if (max_gap < score[j] - score[j + 1]) {
				max_gap = score[j] - score[j + 1];
			}
		}


		printf("Class %d\n", k);
		printf("Max %d, Min %d, Largest gap %d\n", Max, Min, max_gap);

		score.clear();
	}
		

}*/