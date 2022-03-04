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
	int sum = 0;
	int num[4];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	sort(num, num + 3);

	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[0]) {
				
		sum = 10000 + num[0] * 1000;
	}
	else if (num[0] != num[1] && num[1] != num[2] && num[2] != num[0]) {
		sum = num[2] * 100;
	}
	else { //2개만 같음
		if (num[0] == num[1] && num[0] != num[2]) {
			sum = 1000 + num[0] * 100;
		}
		else if (num[1] == num[2] && num[1] != num[0]) {
			sum = 1000 + num[1] * 100;
		}
		else if (num[2] == num[0] && num[2] != num[1]) {
			sum = 1000 + num[2] * 100;
		}
	}


	printf("%d\n", sum);

}*/