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
	int t;
	cin >> t;
	cin.ignore();

	while (t--) {
		string s;
		getline(cin, s);

		bool flag = true;

		for (int i = 0; i < s.size(); i++) {
			
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';


			if (s[i] != s[s.size() - i-1]) {
				flag = false;
				break;
			}
		
		}

		if (flag) {
			cout << "Yes" << "\n";
		}
		else {
			cout << "No" << "\n";
		}
	
	
	}



	return 0;
}*/