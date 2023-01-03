#pragma warning(disable : 4996)
using namespace std;
#include <iostream>
#include <iomanip>
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
#define pi 3.14159265359
typedef pair<int, int> PII;
using namespace std;

/*
double t, weight;
string unit;

double getConvertedWeight() {
    if (unit == "kg") {
        unit = "lb";
        return weight * 2.2046;
    }
    if (unit == "lb") {
        unit = "kg";
        return weight * 0.4536;
    }
    if (unit == "l") {
        unit = "g";
        return weight * 0.2642;
    }
    unit = "l";
    return weight * 3.7854;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> weight >> unit;
        printf("%.4f", getConvertedWeight());
        cout << " " << unit << '\n';
    }
}*/