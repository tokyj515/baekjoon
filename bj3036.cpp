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
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> P;

/*
//��� �ּ� ������� ������

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

// ù��°��/�ٸ�����
int main() {
	int t;
	scanf("%d", &t);
	t--;

	int first;
	scanf("%d", &first);

	while (t--) {
		int temp;
		scanf("%d", &temp);

		int s = gcd(first, temp);

		printf("%d/%d\n", first / s, temp / s);
	
	}


}


*/