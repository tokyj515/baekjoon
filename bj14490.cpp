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

//약수 최소 공배수로 나누기

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


int main() {

	int n, m;
	scanf("%d:%d", &n, &m);

	int s = gcd(n, m);



	printf("%d:%d\n", n/s, m/s);


	return 0;
}