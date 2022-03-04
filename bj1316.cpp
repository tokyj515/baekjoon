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
#define _CRT_SECURE_NO_WARNINGS


/*
int main() {
	int count = 0; //그룹단어가 아닌 것
	int t;
	scanf("%d", &t);
	int ans = t;


	while (t--) {
		bool visited[30] = { false, }; //0~25 //a~z
		string s;
		cin >> s;

		

		visited[(int)(s[0]) - 97] = true;

		for (int i = 1; i < s.size(); i++) {
			if (s[i] == s[i - 1]) {
				continue;
			}
			else if (s[i] != s[i - 1] && visited[(int)(s[i]) - 97] == true) {
				count++;
				break;
			}
			else {
				visited[(int)(s[i]) - 97] = true;
			}
		}

	}


	printf("%d\n", ans - count);



	return 0;
}*/