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
#define _CRT_SECURE_NO_WARNINGS


/*
int main() {
	bool check = false;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;

	int t;
	scanf("%d", &t);


	if (t % 10 != 0) {
		printf("-1");
		return 0;
	}

	while (t > 0) { //0이하가 되면 탈출
		
		while (t >= 300) {
			aCount++;
			t -= 300;
		}

		while (t >= 60) {
			bCount++;
			t -= 60;
		}


		while (t >= 10) {
			cCount++;
			t -= 10;
		}

		check = true;
	
	}





	if (check) {
		printf("%d %d %d", aCount, bCount, cCount);
	}
	




	return 0;
}*/