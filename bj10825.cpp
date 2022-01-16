
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
struct Student {
	string name;
	int kor, eng, mat;
};

bool compare(Student x, Student y) {
	if (x.kor == y.kor) {
		if (x.eng == y.eng) {
			if (x.mat == y.mat) {
				return x.name < y.name;
			}
			else {
				return x.mat > y.mat;
			}
		}
		else {
			return x.eng < y.eng;
		}

	}
	else {
		return x.kor > y.kor;
	}


}


int main() {
	int n;
	scanf("%d", &n);

	vector<Student> v(n);

	int i, j;
	for (i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].mat;
	}


	sort(v.begin(), v.end(), compare);


	for (i = 0; i < n; i++) {
		printf("%s\n", v[i].name.c_str());
	}

	return 0;
}*/