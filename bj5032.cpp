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
    int e, f, c, total = 0;
    cin >> e >> f >> c;

    int cola = e + f; //빈 병의 개수

    while (cola >= c) {
        total += cola / c; //빈 병을 탄산음료로 교환한다.
        cola = cola / c + cola % c; //교환한 탄산음료도 빈 병이 될 수 있으므로 이를 교환하고 남은 빈 병에 더해준다.
    }

    cout << total << '\n';
}*/
