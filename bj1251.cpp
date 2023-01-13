#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <iomanip>
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
#define pi 3.14159265359
typedef pair<int, int> PII;


/*
string input, result;
string a, b;

int main() {
	cin >> input;

	result = "{";

	for (int i = 0; i < input.size() - 2; i++) {
		for (int j = i + 1; j < input.size() - 1; j++) {

			string val;

			for (int u = i; u >= 0; u--)
				val += input[u];

			for (int u = j; u > i; u--)
				val += input[u];

			for (int u = input.size() - 1; u > j; u--)
				val += input[u];

			if (result > val) result = val;

		}

	}


	cout << result << endl;
}*/