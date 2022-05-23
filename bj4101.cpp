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

int main() {
	int a, b;

	while (true) {
		scanf("%d %d", &a, &b);
		
		if (a == 0 && b == 0) {
			break;
		}

		if (a > b) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	
	
	}
	
	return 0;
}