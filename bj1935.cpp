
#pragma warning(disable : 4996)
using namespace std;

#include <iostream>
#include <string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#define _CRT_SECURE_NO_WARNINGS

/*
int main() {
	int n;
	string f;
	
	scanf("%d", &n);
	cin >> f;

	int* num = new int[n];
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	stack<double> s;
	double temp;

	for (i = 0; i < f.size(); i++) {

		if ('A' <= f[i] && f[i] <= 'Z') {//숫자가 들어갈 자리
			s.push(num[f[i] - 'A']);
		}
		else {//연산자인 경우

			
			double x, y;
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();


			switch (f[i]) {
			case '+':
				temp = x + y;
				break;
			case '-':
				temp = x - y;
				break;

			case'*':
				temp = x * y;
				break;

			case'/':
				temp = x / y;
				break;
			}
			s.push(temp);

		}

	}


	printf("%.2f\n", temp);




	return 0;
}*/