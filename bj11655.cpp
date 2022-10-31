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
	string s;
	getline(cin, s);


	for (int i = 0; i < s.size(); i++) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') cout << ' ';

            else if (s[i] >= 'a' && s[i] <= 'z') {
                int tmp = (s[i] - 'a' + 13) % 26;
                cout << char('a' + tmp);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                int tmp = (s[i] - 'A' + 13) % 26;
                cout << char('A' + tmp);
            }

            else cout << s[i];
        }
	}

	return 0;
}*/