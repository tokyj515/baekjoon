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
int L, C; //L: 문자열길이 C:알파벳개수
char alp[35];

void func(int start, string res, int vowel, int consonant) {

	
	if (res.size() == L) { //함수 종료 조건

		if (vowel >= 1 && consonant >= 2) {
			cout << res << "\n";
			return;
		}

	}

	for (int i = start; i < C; i++) {
		if (alp[i] == 'a' || alp[i] == 'e' || alp[i] == 'i' || alp[i] == 'o' || alp[i] == 'u')
			func(i + 1, res + alp[i], vowel + 1, consonant);
		else
			func(i + 1, res + alp[i], vowel, consonant + 1);
	}


}
int main() {

	scanf("%d %d", &L, &C);

	for (int i = 0; i < C; i++) {
		cin >> alp[i];
	}

	sort(alp, alp + C);
	func(0, "", 0, 0);

	return 0;
}


*/