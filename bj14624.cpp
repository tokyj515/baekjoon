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
int N;
void func(int idx, int space) {

	if (idx == -1) return;

	for (int i = 0; i < idx; i++)
		cout << " ";
	cout << "*";
	for (int i = 0; i < space; i++)
		cout << " ";
	cout << "*\n";


	func(idx - 1, space + 2);
}



int main(void){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	if (N % 2 == 0)
		cout << "I LOVE CBNU\n";

	else {

		for (int i = 0; i < N; i++)
			cout << "*";

		cout << "\n";

		int mid = N / 2;
		for (int i = 0; i < mid; i++)
			cout << " ";

		cout << "*\n";

		func(mid - 1, 1);

	}

	return 0;

}*/


/*
char arr[51][51];

int main() {
	int n;

	if (n % 2 == 1) {

		//*******
		for (int i = 0; i < n; i++) {
			arr[0][i] = '*';
		}


		//¤µºÎºÐ
		for (int i = 1; i <= (n + 1) / 2; i++) {

		}
		



		for (int i = 0; i <= (n + 1) / 2 + 1; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j];
			}
			cout << "\n";
		}
	
	}
	else {
		cout << "I LOVE CBNU" << "\n";
	
	}


	return 0;
}*/