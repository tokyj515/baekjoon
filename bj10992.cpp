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
	int N;
	cin >> N;

	if (N == 1) {
		cout << "*";
		return 0;
	}
	else if (N == 2) {
		cout << " *\n";
		cout << "***";
		return 0;
	}


	//첫번째줄
	for (int b = 1; b <= N - 1; b++) {
		cout << " ";
	}
	cout << "*" << "\n";




	//2~N-1번째
	for (int i = 2; i <= N-1; i++) {
		for (int b = 1; b <= N - i; b++) {
			cout << " ";
		}
		cout << "*";
		for (int b = 1; b <= 2*(i-1)-1; b++) {
			cout << " ";
		}
		cout << "*" << "\n";
	
	}



	//마지막줄
	for (int s = 1; s <= 2*N-1; s++) {
		cout << "*";
	}








	return 0;
}*/