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
string board;
string ans;

int main() {
	cin >> board;

	bool check = true;
	int count = 0;
	int i = 0;


	while (i < board.size()) {
		if (board[i] == 'X' && board[i + 1] == 'X' && board[i + 2] == 'X' && board[i + 3] == 'X') {
			ans += "AAAA";
			i += 4;
		}
		else if (board[i] == 'X' && board[i + 1] == 'X') {
			ans += "BB";
			i += 2;
		}
		else if (board[i] == '.') {
			ans += ".";
			i += 1;
		}
		else {
			break;
		}
	
	
	
	}



	
	//�������̳�� ���� �������� üũ
	if (board.size() != ans.size()) {
		check = false;
	}



	if (check) {
		cout << ans;
	}
	else {
		printf("-1");
	}



	return 0;
}*/