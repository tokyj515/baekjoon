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

/*

int N, M; //�����̳� ����, �켱���� ����(�ִ� �켱����)
int ans = 0;

int main() {
	//�������(���� ���������� �Ǿ��־���� ��)
	//����������(��������� ������� �ױ� ���� ��� ���δ� ����)

	//�켱������ ū �ͺ��� �����ؾ� �ϴϱ� less�� ����
	//priority_queue <P> order; 

	//������ ����
	priority_queue <P> rest;

	queue<P> order; //<�켱����, ����>

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		int p, w; // �� �����̳��� �켱����, ����
		scanf("%d %d", &p, &w);
		order.push({ p, w });
	}

	int tempM = M;

	while (tempM--) {
		for (int i = 0; i < N; i++) {

			if (order.front().first != M) {
				int p = order.front().first;
				int w = order.front().second;
				order.push({ p, w });

			}

		}
	}


	printf("================================\n");
	for (int i = 0; i < order.size(); i++) {
		printf("%d %d\n", order.front().first, order.front().second);
		order.pop();
	}

	

}*/