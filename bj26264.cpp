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
#define pi 3.14159265359
typedef pair<int, int> PII;
using namespace std;


/*
int t;
string s;
int security = 0, bigdata = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t >> s;

	while (!s.empty()) {
		if (s[0] == 's') {
			s.erase(0,8);
			security++;
		}
		else if (s[0] == 'b') {
			s.erase(0, 7);
			bigdata++;
		}
	}

	if (security > bigdata) {
		cout << "security!" << "\n";
	}
	else if (security < bigdata) {
		cout << "bigdata?" << "\n";
	}
	else {
		cout << "bigdata? security!" << "\n";
	}


	return 0;
}*/