
#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

/*이거 못풀음

int main() {
	int d, k; //몇번째날, 떡개수
	scanf("%d %d", &d, &k);

	int* v = new int[d+1];

	int i, j;
	v[1] = 1;
	v[2] = 1;
	for (i = 3; i <= d + 1; i++) {
		v[i] = v[i - 1] + v[1 - 2];
	}

	for (i = 1; i <= k; i++) {
		for (j = 1; j <= k; j++) {
			if (i * v[d-2] + j * v[d-1] == k) {
				printf("%d\n%d", i, j);
				return 0;
			}
			else {
			
			}
		
		}
	
	
	}



	return 0;
}*/