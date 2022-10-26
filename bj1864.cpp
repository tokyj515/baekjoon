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
string s;
map <char, int> m;

int main() {
    m['-'] = 0, m['\\'] = 1, m['('] = 2, m['@'] = 3;
    m['?'] = 4, m['>'] = 5, m['&'] = 6, m['%'] = 7;
    m['/'] = -1;


    while (true) {

        cin >> s;
        if (s == "#") break;


        int num = 0;
        int indice = s.size() - 1;

        for (int i = 0; i < s.size(); i++, indice--)
            num += pow(8, indice) * m[s[i]];

        cout << num << "\n";
    }
}*/