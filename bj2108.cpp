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
vector<int> nums;
int num;
int cnt[8010];


int main() {
	int n;
	scanf("%d", &n);


	double total = 0; //���


	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		nums.push_back(num);
		
		total += num;
		cnt[num + 4000]++;
	}
	sort(nums.begin(), nums.end());

	int flag;
	int max = 0;


	for (int i = 0; i < 8001; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			flag = i;
		}
	}


	for (int i = flag + 1; i < 8001; i++) {
		if (cnt[i] == max) {
			flag = i;
			break;
		}
	}

	cout << round(total / n) << "\n";

	printf("%d\n", nums[(n - 1) / 2]);
	printf("%d\n", flag - 4000);
	printf("%d\n", nums[n - 1] - nums[0]);

	return 0;
}


//���� �ڵ�
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check[8001];

int find_mean(vector<int> vec, int n)
{
	double mean = 0;

	for (int i = 0; i < n; i++) {
		mean += vec[i];
	}

	mean = mean / n;

	//�ݿø� ����
	//����� �� 0.5�� ���ؼ� �����ڸ��� �ٲ��, int������ ������ �� �ݿø� �� ����� ���´�. ex) 1.5 + 0.5 = 2.0 => int������ ��ȯ �� 2.
	//ex)2 1.4 + 0.5 = 1.9 => int������ ��ȯ �� 1. ��, �ݿø� �Ǵ� ����� Ȯ���� �� �ִ�. ������ �ݴ�� �����ϸ� ��.
	if (mean > 0) mean += 0.5;
	else mean -= 0.5;

	return (int)mean;
}

int find_median(vector<int> vec, int n)
{
	int middle = n / 2;
	return vec[middle];
}

//�ֺ��� ���� �� ���� ������ �� ������ ���� ���� ����Ѵ�.
int find_mode(int n)
{
	int frequency = 0; //�󵵼��� �����ϴ� ����
	int location = 0;

	for (int i = 0; i < 8001; i++) {
		if (frequency < check[i]) {
			frequency = check[i];
			location = i;
		}
	}

	//������ �ٷ� ���� ���ǿ� �����ϴ� ���� ���ϰ� break�� �ϱ� ������ for���ο� ���ǿ� ������ ����� ���� ������ �ʿ�� ����.
	//�׷�����, ������ ���� ������ ������
	//location�� ������ �ִ� �ٸ� �ӽú����� �ϳ� ����� for (int i = temp + 1; ~~)�� �ۼ��ϴ� ���� ���� ���� ���� �� ����.
	for (int i = location + 1; i < 8001; i++) {
		if (frequency == check[i]) {
			location = i;
			break;
		}
	}

	return location - 4000;
}

int find_range(vector<int> vec, int n)
{
	int range = 0;
	range = vec[n - 1] - vec[0];

	return range;
}


int main()
{
	int n;
	int data;
	vector<int> vec;

	int mean, median, mode, range;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> data;
		vec.push_back(data);
		check[data + 4000]++;

		//���⼭ max, min���� ���� ���س����� ���� sort�� �ʿ� ���� range�� ���� �� �ִ�.
	}

	sort(vec.begin(), vec.end());

	mean = find_mean(vec, n);
	median = find_median(vec, n);
	mode = find_mode(n);
	range = find_range(vec, n);


	printf("%d\n", mean);
	printf("%d\n", median);
	printf("%d\n", mode);
	printf("%d\n", range);

	return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N, temp, mean, mode = 0, min, max = 0;
    bool isSecond = false;
    cin >> N;

    vector<int> vec(N);
    vector<int> vec2(8001, 0);

    for (int i = 0; i < N; i++) {
        cin >> vec[i];
        mean += vec[i];
        temp = (vec[i] <= 0) ? abs(vec[i]) : vec[i] + 4000;
        vec2[temp]++;
        if (vec2[temp] > max)
            max = vec2[temp];
    }
    sort(vec.begin(), vec.end());

    for (int i = -4000; i < 4001; i++) {
        temp = i <= 0 ? abs(i) : i + 4000;
        if (vec2[temp] == max) {
            mode = i;
            if (isSecond)
                break;
            isSecond = true;
        }
    }

    //������ : N���� ������ ���� N���� ���� ��
    cout << round(mean / (double)N) << '\n';
    //�߾Ӱ� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
    cout << vec[round(N / 2)] << '\n';
    //�ֺ� : N���� ���� �� ���� ���� ��Ÿ���� ��
    cout << mode << '\n';
    min = vec[0];
    max = vec[vec.size() - 1];
    //���� : N���� ���� �� �ִ񰪰� �ּڰ��� ����
    cout << max - min << '\n';
}
*/