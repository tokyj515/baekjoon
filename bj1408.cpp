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
    int start[3];
    int now[3];

    scanf("%d:%d:%d", &now[0], &now[1], &now[2]);
    scanf("%d:%d:%d", &start[0], &start[1], &start[2]);
    int rest = (start[0] - now[0]) * 3600 + (start[1] - now[1]) * 60 + (start[2] - now[2]);
    int h, m, s;

    if (rest < 0)
        rest += 24 * 60 * 60;

    h = rest / 3600;
    rest %= 3600;

    m = rest / 60;
    rest %= 60;

    s = rest;
    printf("%02d:%02d:%02d", h, m, s);
}*/