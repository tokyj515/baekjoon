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
	int t;
	scanf("%d", &t);



	string s;
	int max_val = 0;
	int count = 0;

	while (t--) {
		cin >> s;
		
		count = 0;

		while (s.size() >= 0) {


			if (s.find("for") != -1) { //for 찾은 경우
				int index = s.find("for");
				//s.erase(index, index + 3);
				s.replace(index, 3, "");

				count++;

			}
			else if (s.find("while") != -1) {
				int index = s.find("while");
				//s.erase(index, index + 5);
				s.replace(index, 5, "");

				count++;

			}
			else {

				max_val = max(max_val, count);
				break;
			}
		}

		
		
		

	}


	printf("%d\n", max_val);

	return 0;
}*/