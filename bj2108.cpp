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
vector<int> nums;
int num;
int cnt[8010];


int main() {
	int n;
	scanf("%d", &n);


	double mean = 0; //���
	int median; //�߾Ӱ�
	int mode; //�ֺ�
	int range; //����

	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		nums.push_back(num);
		

		//����� ���ϱ� ����
		mean += num;


		//�ֺ��� ���ϱ� ����
		if (num < 0) {//-1~-4000
			cnt[-num]++;
		}
		else if (num == 0) {
			cnt[0]++;
		}
		else if (num > 0) {
			cnt[num + 4000]++;
		}


	}
	sort(nums.begin(), nums.end());




	//���
	mean = mean / n;
	printf("%f\n", round(mean));

	//�߾Ӱ�
	median = nums[n / 2];
	printf("%d\n", median);

	//�ֺ�
	mode = *max_element(nums.begin(), nums.end());
	printf("%d\n", mode);

	//����
	range = nums[n - 1] - nums[0];
	printf("%d\n", range);




	return 0;
}*/