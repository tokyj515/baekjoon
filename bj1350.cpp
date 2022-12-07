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
int arr[51];


int main() {
	ll t, cluster;
    ll cnt = 0;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	cin >> cluster;



    for (int i = 0; i < t; i++) {
        if (arr[i] > cluster) {
            if (arr[i] % cluster == 0) {
                cnt += arr[i] / cluster;
            }
            else {
                cnt += arr[i] / cluster + 1;
            }
        }
        else if (arr[i] != 0) {
            cnt += 1;
        }
    }

    cout << cnt * cluster << "\n";


	return 0;
}*/