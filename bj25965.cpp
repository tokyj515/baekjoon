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
int t, mission;
int k, d, a;

int main() {
	cin >> t;

	while (t--) {
		ll ans = 0, temp = 0;
		ll arr[101][3];

		cin >> mission;
		for (int i = 0; i < mission; i++) {
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		}
		cin >> k >> d >> a;



		for (int i = 0; i < mission; i++) {

			temp += (arr[i][0] * k - arr[i][1] * d + arr[i][2] * a);

			if (temp < 0) temp = 0;

			ans += temp;

			temp = 0;
		}
	
		cout << ans << "\n";
	}


	return 0;
}*/