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
int n, m; //n�� ��, m�� ��

int rowsize = 0; //����ִ� ���� ����
int colsize = 0; //����ִ� ���� ����

char mat[101][101]; //���� ����� ����

int main() {
	cin >> n >> m;

	//n�� m�� ���� ����� ���� �Է�
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mat[i][j];
		}
	}

	//����ִ� ���� ����
	for (int i = 1; i <= n; i++) {
		bool check = true;
		for (int j = 1; j <= m; j++) { //i��° ���� ���ҵ��� ����
			if (mat[i][j] == 'X') { //��� ������
				check = false; //flag�� false�� �ϰ�
				break; //Ż��
			}
		}
		if (check) { //��� ������
			rowsize++; //����ִ� �� ���� ����
		}
	}

	//����ִ� ���� ����
	for (int j = 1; j <= m; j++) {
		bool check = true;
		for (int i = 1; i <= n; i++) { //j��° ���� ���ҵ��� ����
			if (mat[i][j] == 'X') { //��� ������
				check = false; //flag�� false�� �ϰ�
				break; //Ż��
			}
		}
		if (check) { //��� ������
			colsize++; //����ִ� �� ���� ����
		}
	}

	//����ִ� ���� ������ ���� ������ ���Ͽ� �� ū ���� ������ ���
	if (rowsize > colsize) {
		cout << rowsize;
	}
	else {
		cout << colsize;
	}
}
*/

/*
int main() {
	int n, m;
	cin >> n >> m;

	int cnt = 0;

	while (n--) {
		string s;
		cin >> s;

		if (s.find('X') == string::npos) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}*/