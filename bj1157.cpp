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
int	cnt[30];//빈도수, 그때의 알파벳

int main() {
	int index;
	bool check; //중복체크
	int max = 0;
	char ans;
	string word;
	cin >> word;

	

	for (int i = 0; i < word.size(); i++) {
		if ('a' <= word[i]) {
			word[i] = word[i] - 32; //대문자로 변경
		}

		cnt[word[i] - 'A']++;
	
	}
	

	for (int i = 0; i < 26; i++) {
		if (cnt[i] == max) {
			check = true;
		}
		else if (cnt[i] > max) {
			max = cnt[i];
			index = i;
			check = false; //중복x
		}

	}

	if (check) {
		printf("?\n");
	}
	else {
		printf("%c", char(index + 'A'));
	}

	return 0;
}*/