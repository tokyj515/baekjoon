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

int arr[100001];


int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	int t;
	scanf("%d", &t);
	while (t--) {
		int sum = 0;
		int a, b;
		scanf("%d %d", &a, &b);

		for (int i = a; i <= b; i++) {
			sum += arr[i];
		}

		printf("%d\n", sum);
	
	}


	return 0;
}



int main(void)
{
	int sum[100010];
	int num, N, M, i, j;

	sum[0] = 0;
	scanf("%d", &N);
	for (i = 1; i < N + 1; i++)
	{
		scanf("%d", &num);
		sum[i] = sum[i - 1] + num;
	}

	scanf("%d", &M);
	while (M--)
	{
		scanf("%d %d", &i, &j);
		printf("%d\n", sum[j] - sum[i - 1]);
	}
	return 0;
}