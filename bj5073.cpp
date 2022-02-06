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
	int num[3];


	while (1) {
		scanf("%d %d %d", &num[0], &num[1], &num[2]);

		if (num[0] == 0 && num[1] == 0 && num[2] == 0) {
			return 0;
		}

		sort(num, num + 3);

		if (num[2] < num[0] + num[1]) { //성립
			if (num[0] == num[1] && num[1] == num[2]) { //세변 모두 같음
				printf("Equilateral\n");
			}
			else if (num[0] != num[1] && num[1] != num[2] && num[2] != num[0]) { //세변 모두 다름
				printf("Scalene\n");
			}
			else {
				printf("Isosceles\n");
			}
		}
		else { //삼각형 성립x
			printf("Invalid\n");
		}

	}


	return 0;
}*/