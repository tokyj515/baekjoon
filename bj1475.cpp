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
	bool visited[10] = { false, }; //0~9
	string  s;
	cin >> s;

	int count = 1; //기본 한 개 세트

	for (int i = 0; i < s.size(); i++) {
		switch (s[i]) {

		case '0': case '1': case '2': case '3': case '4': case '5': case '7': case '8':
			if (visited[s[i]] == false) {
				visited[s[i]] == true;
			}
			else {
				count++;
			}

		case '6':
			if (visited[6] == false) {
				visited[6] == true;
			}
			else if (visited[6] == true && visited[9] == true) {
				count++;
				visited[9] == false;
			}
		case '9':

		default:
			break;
		}
	
	}



	return 0;
}*/