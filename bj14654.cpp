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
int n, ans, cntA, cntB;
int teamA[301];
int teamB[301];


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> teamA[i];
    for (int i = 0; i < n; i++) 
        cin >> teamB[i];

    for (int i = 0; i < n; i++) {
        if (teamA[i] == 1 && teamB[i] == 2) cntA = 0, cntB++;
        else if (teamA[i] == 2 && teamB[i] == 3) cntA = 0, cntB++;
        else if (teamA[i] == 3 && teamB[i] == 1) cntA = 0, cntB++;
        else if (teamB[i] == 1 && teamA[i] == 2) cntA++, cntB = 0;
        else if (teamB[i] == 2 && teamA[i] == 3) cntA++, cntB = 0;
        else if (teamB[i] == 3 && teamA[i] == 1) cntA++, cntB = 0;
        else if (teamB[i] == teamA[i]) {
            if (cntA) cntA = 0, cntB++;
            else cntB = 0, cntA++;
        }
        ans = max({ ans, cntA, cntB });
    }
    cout << ans << '\n';
}*/