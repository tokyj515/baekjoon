/*문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.*/

#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

/*
bool compare(int a, int b) {
	return a > b;
}


int main() {
	int n;
	scanf("%d", &n);

	string a = to_string(n);

	sort(a.begin(), a.end(), compare);


	for (int i = 0; i < a.size(); i++) {
		printf("%c", a[i]);
	}


}
*/