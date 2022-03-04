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
#define _CRT_SECURE_NO_WARNINGS


/*
int main() {
	stack<char> s;
	string f;
	cin >> f;


	int temp = 1; //°ö
	long long ans = 0; //ÃÖÁ¾´ä
	bool check = false;



	for (int i = 0; i < f.size(); i++) {
		


		//¿©´Â °ýÈ£
		if (f[i] == '(') {
			temp *= 2;
			s.push(f[i]);
		}

		else if(f[i] == '[') {
			temp *= 3;
			s.push(f[i]);
		}
		


		//´Ý´Â °ýÈ£
		else if (f[i] == ')') {

			if (f[i - 1] == '(') {
				ans += temp;
				temp /= 2;
				s.pop();
			}

			else if (s.empty()) {
				printf("0");
				return 0;
			}
			
			else if (s.top() == '(') {
				temp /= 2;
				s.pop();
			}

			else {
				printf("0");
				return 0;
			}
		}

		else if (f[i] == ']') {

			if (f[i - 1] == '[') {
				ans += temp;
				temp /= 3;
				s.pop();
			}

			else if (s.empty()) {
				printf("0");
				return 0;
			}
			
			else if (s.top() == '[') {
				temp /= 3;
				s.pop();
			}

			else {
				printf("0");
				return 0;
			}
		
		}
	}





	if (!s.empty()) {
		printf("0");
	}
	else {
		printf("%lld\n", ans);
	}




	return 0;
}*/