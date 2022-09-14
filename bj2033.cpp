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


/*
int main() {
	int result, n, i, count = 0;	
	// 최종 결과값 변수, 사용자에게 받은 정수 값, count+1의 자리수
	scanf("%d", &n);
	result = n;


	while (n / 10 > 0) {
		if (n % 10 > 4)	// 올림 발생
			n = n + 10;
		n = n / 10;
		count++;
	}


	for (int i = 0; i < count; i++)
		n = 10 * n;
	printf("%d", n);
}*/