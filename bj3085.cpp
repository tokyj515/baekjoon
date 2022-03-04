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
int n;
char candy[55][55];
int max_val = 0;
 
void checkH() { //가로
	int count = 1;

	
	for (int i = 0; i < n; i++) {
		count = 1;
		for (int j = 0; j < n; j++) {

			if (candy[i][j] == candy[i][j + 1]) {
				count++;
			}
			else {
				max_val = max(count, max_val);
				count = 1;
			}
			
		}
	}

}


void checkV() { //세로

	int count = 1;
	for (int i = 0; i < n; i++) {
		count = 1;
		for (int j = 0; j < n; j++) {

			if (candy[j][i] == candy[j + 1][i]) {
				count++;
			}
			else {
				max_val = max(count, max_val);
				count = 1;
			}

		}
	}
}





int main() {
	
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%c", &candy[i][j]);
		}
	}



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			
			swap(candy[i][j], candy[i][j + 1]);
			checkH();
			checkV();
			swap(candy[i][j], candy[i][j + 1]);

		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {

			swap(candy[j][i], candy[j + 1][i]);
			checkH();
			checkV();
			swap(candy[j][i], candy[j + 1][i]);

		}
	}

	printf("%d\n", max_val);


	return 0;
}*/