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
#define _CRT_SECURE_NO_WARNINGS



/*

int main() {

	int N;
	scanf("%d", &N);

	priority_queue<int, vector<int>, greater<int>> pq1;//��� ��������
	priority_queue<int> pq2; //���� ��������

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);

		if (num != 0) {
			if (num < 0) { //����
				pq2.push(num);
			}
			else if (num > 0) {
				pq1.push(num);
			}
		}
		else { //pop
			if (pq1.empty() && pq2.empty()) {
				//�� �� ����ִٸ�
				printf("0\n");
			}
			else {
				if (pq1.empty()) {
					printf("%d\n", pq2.top());
					pq2.pop();
				}
				else if (pq2.empty()) {
					printf("%d\n", pq1.top());
					pq1.pop();
				}
				else { //�� �� ������� �ʴٸ�
					if (pq1.top() < -pq2.top()) {
						printf("%d\n", pq1.top());
						pq1.pop();
					}
					else {
						printf("%d\n", pq2.top());
						pq2.pop();
					}
				
				}
			
			
			
			}
			
		}

	}







	return 0;
}*/