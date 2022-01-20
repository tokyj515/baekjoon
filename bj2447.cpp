
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
char star[6600][6600];
int i, j;

void func(int i, int j, int size) {
	if ((i / size) % 3 == 1 && (j / size) % 3 == 1) {
		printf(" ");
	}
	else {
	
		if (size / 3 == 0) {
			printf("*");
		}
		else{
			func(i, j, size / 3);
		}
	}

}

int main() {

	int n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			func(i, j, n);
		}
		printf("\n");
	}


}*/



/*
void func(int y, int x, int size) {

	int length = size / 3;

	if (length == 3) {//최소
		for (i = y+length; i < y + length*2; i++) {
			for (j = x + length; j < x + length * 2; j++) {
				star[i][j] = ' ';
			}
		}

		return;
	}



	func(y, x, length); //1번
	func(y, x + length, length); //2번
	func(y, x + length * 2, length); //3번

	func(y + length, x, length); //4번
	//func(y + length, x + length, length); //5번
	func(y + length, x + length * 2, length); //6번

	func(y + length * 2, x, length); //7번
	func(y + length * 2, x + length, length); //8번
	func(y + length * 2, x + length * 2, length); //9번


	return;
}



int main() {
	int n;
	scanf("%d", &n); 


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			star[i][j] = '*';
		}
	}


	func(0, 0, n); 


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c", star[i][j]);
		}
		printf("\n");
		
	}

	return 0;
}*/