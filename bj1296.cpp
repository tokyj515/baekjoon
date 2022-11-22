#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;




/*
int n;
string s1, ans;
int l, o, v, e;
int cur, res = -1;


int main() {
	cin >> s1;



	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == 'L') l++;
		else if (s1[i] == 'O') o++;
		else if (s1[i] == 'V') v++;
		else if (s1[i] == 'E') e++;
	}

	cin >> n;
	while (n--) {
		int tempL = l, tempO = o, tempV = v, tempE = e;
		string s2;
		cin >> s2;


		for (int i = 0; i < s2.size(); i++) {
			if (s2[i] == 'L') tempL++;
			else if (s2[i] == 'O') tempO++;
			else if (s2[i] == 'V') tempV++;
			else if (s2[i] == 'E') tempE++;
		}


		cur = ((tempL + tempO) * (tempL + tempV) * (tempL + tempE) * (tempO + tempV) * (tempO + tempE) * (tempV + tempE)) % 100;

		if (cur > res) {
			res = cur;
			ans = s2;
		}
		else if (cur == res) {
			if (s2 < ans) ans = s2;
		}
	}


	cout << ans;

	return 0;
}*/