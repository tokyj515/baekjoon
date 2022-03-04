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
int main() {
	int arr[101];
	int n; //스위치 개수
	int t; //학생수 테스트케이스
	

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &t);



	while (t--) {
		int s, num; //성별, 스위치 번호
		scanf("%d %d", &s, &num);



		if (s == 1) { //남자
			for (int i = 1; i <= n; i++) {
				if (i % num == 0) { //배수
					arr[i] = !arr[i];
				}
			}
		}

		else if(s == 2) { //여자
			

			arr[num] = !arr[num];
			for (int i = 1; arr[num + i] == arr[num - i]; i++) {
				if (num - i < 1 || num + i > n) {
					break;
				}
				arr[num + i] = !arr[num + i];
				arr[num - i] = !arr[num - i];
			}
		}	
	
	}



	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
		if (i % 20 == 0) {
			printf("\n");
		}
	}



	return 0;
}*/


/*
			int start = num;
			int end = num;

			while (1 <= start && end <= n) {
				start--;
				end++;

				if (arr[start] != arr[end]) {
					break;
				}

				for (int i = start + 1; i <= end - 1; i++) {
					arr[i] = !arr[i];
				}
			}*/