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
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
typedef pair<int, int> PII;


/*
int arr[7];
int n, num;
int maxVal = 0;
int temp;


int main() {
	
	cin >> n;

	while (n--) {
		int arr[7] = { 0, };

		for (int i = 0; i < 4; i++) {
			cin >> num;
			arr[num]++;
		}


		for (int i = 1; i <= 6; i++) {
			if (arr[i] == 4) {
				temp = 50000 + i * 5000;
				maxVal = temp;
				break;
			}
			else if (arr[i] == 3) {
				temp = 10000 + i * 1000;
				maxVal = temp;
				break;
			} 
			else if (arr[i] == 2) {
				for (int j = i + 1; j <= 6; j++) {
					if (arr[j] == 2) {
						temp = 2000 + i * 500 + j * 500;
						maxVal = temp;
						break;
					}
				}
			} 
			else if (arr[i] == 1) {
				int idx = 0;
				for (int j = 1; j <= 6; j++) {
					if (arr[j] == 1 && j>=idx) {
						idx = j;
					}
				}

				temp = idx * 100;
				maxVal = temp;
				break;
			}
		}

	}


	return 0;
}*/