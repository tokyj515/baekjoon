
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
int countzero(int a, int b) { //a<= <=b
	int count = 0;
	int i, j;

	 
	for (i = a; i <= b; i++) {
		int temp = i;
		if (temp == 0) count++;

		while (temp > 0) {
			if (temp % 10 == 0) {
				count++;
			}
			temp /= 10;
		}
	
	}

	return count;
}



int main() {
	int t;
	scanf("%d", &t);

	int cnt = 0;
	int a, b;
	int i;
	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		cnt = countzero(a, b);
		printf("%d\n", cnt);
	}


	return 0;
}*/