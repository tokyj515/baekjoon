
#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#define _CRT_SECURE_NO_WARNINGS


/*
int main() {
	queue<int> q;
	int n, k;
	scanf("%d %d", &n, &k);

	int i;
	for (i = 1; i <= n; i++) {
		q.push(i);
	}

	int temp;
	printf("<");
	while (q.empty() == 0) { //ť�� ������� �ʴ� ����
		for (i = 0; i < k - 1; i++) {
			temp = q.front();//�Ǿ�
			q.push(temp);//�ǵ�
			q.pop();
		}
		

		if (q.size() > 1) {
			printf("%d, ", q.front());
			q.pop();
		}
		else {

			printf("%d>", q.front());
			return 0;
		}

		

	}
	//printf("%d>", q.front());
	//printf(">");

	return 0;
}*/