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
	int n, m; //���� ũ��, �̰���� ��ġ�� �� ������
	deque<int> dq;
	int index;
	int find;
	int count = 0;

	scanf("%d %d", &n, &m);


	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}



	while (m--) {
		scanf("%d", &find); //�ϳ��� ã��


		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == find) {
				index = i;
				break;
			}
		}


		if (index < dq.size() - index) {
			while (1) {
				if (dq.front() == find) {
					dq.pop_front();
					break;
				}
				dq.push_back(dq.front());
				dq.pop_front();
				count++;
			}
		}
		else {
			while (1) {
				if (dq.front() == find) {
					dq.pop_front();
					break;
				}
				dq.push_front(dq.back());
				dq.pop_back();
				count++;
			}
		
		
		}
	}


	printf("%d\n", count);




	return 0;
}*/