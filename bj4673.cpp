
#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//�Է��� ����
/*
int d(int num) {
	int sum = 0;
	
	sum += num;

	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main() {
	int i, j;
	int count = 0;
	int ans[10010] = { 0 }; //�����ѹ��� �ƴϸ� 1

	for (i = 1; i <= 10000; i++) {

		int checknum = d(i); //�Լ��� ���� ���� ���
		
		for (j = 1; j <= 10000; j++) {
			if(checknum == j){
				ans[j] = 1; //d(n)�� 10000�� ���� ���ڰ� �ִٸ� 1�� üũ
			}
		}
	}

	
	for (j = 1; j <= 10000; j++) {
		if (ans[j] == 0) {
			printf("%d\n", j);
		}
	}


	return 0;
}*/