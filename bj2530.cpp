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
	int h, m, s;
	int time;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &time);


	int hour, min, sec;
	sec = time % 60;
	min = (time / 60) % 60;
	hour = (time / 60) / 60;


	if (s + sec >= 60) {
		s = (s + sec) % 60;
		m++;
	}
	else {
		s = s + sec;
	}


	if (m + min >= 60) {
		m = (m + min) % 60;
		h++;
	}
	else {
		m = m + min;
	}


	if (h + hour >= 24) {
		h = (h + hour) % 24;
	}
	else {
		h = h + hour;
	}


	
	
	printf("%d %d %d\n", h, m, s);



	return 0;
}*/