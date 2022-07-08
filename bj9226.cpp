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

	while (true) {
		queue<char> q;

		string s;
		cin >> s;

		if (s == "#") break;



		
		if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') {
			cout << s + "ay" << "\n";
		}
		else{
			q.push(s[0]);

			for (int i = 1; i < s.size(); i++) {
				if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
					cout << s.substr(i, s.size() - i);
					break;
				}
				else {
					q.push(s[i]);
				}
			}

			while (!q.empty()) {
				cout << q.front();
				q.pop();
			}
			cout << "ay" << "\n";
		}
			

	}

	return 0;
}*/