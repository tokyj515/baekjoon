
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

	stack<int> s; //����
	string f; //����
	cin >> f;

	int temp = 0;

	int i;
	for (i = 0; i < f.length(); i++) {
		if ('0' <= f[i] && f[i] <= '9') { //������ ���
			s.push(f[i]-'0');
		}
	
		else {//�������� ���
			int x, y;
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();

			switch (f[i]) {
			case '+':
				temp = x + y;	break;
			case '-':
				temp = x - y;	break;
			case'*':
				temp = x * y;	break;
			case'/':
				temp = x / y;	break;
			}
			s.push(temp);
		}
	}


	printf("%d\n", temp);

	return 0;
}*/