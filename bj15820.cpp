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
int sampleTest, systemTest;
int sampleWrong, systemWrong;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> sampleTest >> systemTest;

	while (sampleTest--) {
		int ans1, ans2;
		cin >> ans1 >> ans2;
		
		while (ans1 != ans2) sampleWrong++;
	}


	while (systemTest--) {
		int ans1, ans2;
		cin >> ans1 >> ans2;

		while (ans1 != ans2) systemWrong++;
	}

	if (sampleWrong == 0 && systemWrong == 0) {
		cout << "Accepted" << "\n";
	}
	else if (sampleWrong > 0) {
		cout << "Wrong Answer" << "\n";
	}
	else {
		cout << "Why Wrong!!!" << "\n";
	}


	return 0;
}*/


/*
#include <iostream>
using namespace std;
int main() {
    int sam, sys;
    int ans;
    int samf = 0, sysf = 0;

    cin >> sam >> sys;

    while (sam--)
    {
        int s, man;
        cin >> s >> man;
        if (s != man)
            samf = 1;

    }
    while (sys--)
    {
        int s, man;
        cin >> s >> man;
        if (s != man)
            sysf = 1;
    }
    if (samf == 0 && sysf)
        cout << "Why Wrong!!!\n";
    else if (samf == 0 && sysf == 0)
        cout << "Accepted\n";
    else
        cout << "Wrong Answer\n";
}*/