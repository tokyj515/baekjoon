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
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS



/*
long long t[36];

int main() {
	long long sum = 0;
	int n;
	scanf("%d", &n);

	t[0] = 1;


	int i, j;
	for (i = 1; i < n + 1; i++) {
		for (j = 0; j < i; j++) {
			t[i] += t[j] * t[i - 1 - j];
		}
	
	}
	

	printf("%lld\n", t[n]);



	return 0;
}*/