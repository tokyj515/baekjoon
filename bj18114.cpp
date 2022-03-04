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
int n, c;
int w[5010];
int cnt = 0;
int	check[100000010];


void search() {
	int ok;
	ok = check[c];
	
	if(ok != 1) {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int sum = w[i] + w[j];

				if (sum == c) { //2개 선택
					ok = 1;
					break;
				}

				else if (sum < c) { //3개 선택
					int gap = c - sum;
					if (check[gap] && w[i] != gap && w[j] != gap) {
						ok = 1;
						break;
					}
				}


			}

			if (ok) {	break;  	}
		}
	}

	printf("%d\n", ok);

}


int main() {
	scanf("%d %d", &n, &c);


	for (int i = 0; i < n; i++) {
		scanf("%d", &w[i]);
		check[w[i]] = 1;
	}

	sort(w, w + n);

	
	search();

	return 0;
}*/