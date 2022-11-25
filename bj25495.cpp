#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <iomanip>
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
	int ans = 0;
	int pre =0, preBattery = 1;
	int t;
	cin >> t;



	while (t--) {
		int phone;
		cin >> phone;
		
		if (phone != pre) { //새 폰 연결
			preBattery = 1;

		}


		preBattery = preBattery * 2;
		ans += preBattery;


		pre = phone; //다음을 위해 이전 거로 설정


		if (ans >= 100) {
			ans = 0;
			preBattery = 1;
		}
	}


	cout << ans << "\n";

	return 0;
}*/