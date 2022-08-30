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
char alp[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int cnt[26];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;

    while (cin >> s) {
        for (int i = 0; i < s.length(); i++) {    
            for (int k = 0; k < 26; k++) {
                if (s[i] == alp[k]) cnt[k]++;
            }
        }
    }


    int maxVal = 0;
    for (int i = 0; i < 26; i++) {    
        if (cnt[i] > maxVal) {
            maxVal = cnt[i];
        }
    }


    for (int i = 0; i < 26; i++) {
        if (cnt[i] == maxVal) cout << alp[i];    
    }


    return 0;
}

*/