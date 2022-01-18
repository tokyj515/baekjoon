
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
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS

/*
struct Person {
	string name;
	int day, month, year;
};


bool compare(Person a, Person b) {
	if (a.year == b.year) {
		if (a.month == b.month) {
			return a.day < b.day;
		}
		else {
			return a.month < b.month; //오름차순
		}

	}
	else {
		return a.year < b.year;
	}

}

int main() {
	int n;
	scanf("%d", &n);

	Person* p = new Person[n];
	
	int i;
	for (i = 0; i < n; i++) {
		cin >> p[i].name >> p[i].day >> p[i].month >> p[i].year;
	}

	sort(p, p + n, compare);


	printf("%s\n%s\n", p[n-1].name.c_str(), p[0].name.c_str());

	return 0;
}*/