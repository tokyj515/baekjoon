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

int A[10];
int B[10];
int scoreA = 0;
int scoreB = 0;
char lastWin = 'D';

int main() {

    //�Է�
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }

    //�������
    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) {
            scoreA += 3;
            lastWin = 'A';
        }
        else if (A[i] < B[i]) {
            scoreB += 3;
            lastWin = 'B';
        }
        else {
            scoreA++;
            scoreB++;
        }
    }

    //���
    cout << scoreA << " " << scoreB << "\n";

    if (scoreA > scoreB) {
        cout << 'A';
    }
    else if (scoreA < scoreB) {
        cout << 'B';
    }
    else {
        cout << lastWin;
    }

    return 0;
}*/