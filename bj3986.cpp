
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
	scanf("%d", &n);

	int count = 0;
	string word;

	int i, j;
	for (i = 0; i < n; i++) {
		stack<char> s;
		cin >> word;
		
		for (j = 0; j < word.length(); j++) {
			if (s.empty()) {
				s.push(word[j]);
			}
			else {
				if (word[j] == s.top()) {
					s.pop();
				}
				else {
					s.push(word[j]);
				}
			}
		}
		
		if (s.empty()) {
			count++;
		}


	
	}
	
	printf("%d\n", count);



	return 0;
}*/