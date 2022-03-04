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


	double mean = 0; //Æò±Õ
	int median; //Áß¾Ó°ª
	int mode; //ÃÖºó°ª
	int range; //¹üÀ§

	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		nums.push_back(num);
		

		//Æò±ÕÀ» ±¸ÇÏ±â À§ÇØ
		mean += num;


		//ÃÖºó°ªÀ» ±¸ÇÏ±â À§ÇØ
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




	//Æò±Õ
	mean = mean / n;
	printf("%f\n", round(mean));

	//Áß¾Ó°ª
	median = nums[n / 2];
	printf("%d\n", median);

	//ÃÖºó°ª
	mode = *max_element(nums.begin(), nums.end());
	printf("%d\n", mode);

	//¹üÀ§
	range = nums[n - 1] - nums[0];
	printf("%d\n", range);




	return 0;
}*/