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
int calc(char a, char b) {
    //0, 1, 2 ÀÌ±è, Áü, ºñ±è

    if (a == 'R') {
        if (b == 'S') return 0;
        else if (b == 'R') return 2;
        else return 1;
    }

    if (a == 'S') {
        if (b == 'P') return 0;
        else if (b == 'S') return 2;
        else return 1;
    }

    if (a == 'P') {
        if (b == 'R') return 0;
        else if (b == 'P') return 2;
        else return 1;
    }
}

int main() {

    //R, S, P =>  ¹ÙÀ§, °¡À§, º¸

    int ms = 0, tk = 0;
    char mr, ml, tr, tl;

    cin >> mr >> ml >> tr >> tl;


    if (calc(mr, tr) == 0) ms++;
    if (calc(mr, tr) == 1) tk++;

    if (calc(mr, tl) == 0) ms++;
    if (calc(mr, tl) == 1) tk++;

    if (calc(ml, tr) == 0) ms++;
    if (calc(ml, tr) == 1) tk++;

    if (calc(ml, tl) == 0) ms++;
    if (calc(ml, tl) == 1) tk++;



    if (mr != ml && tr != tl) {
        if (ms > 0 && tk > 0)
            cout << "?" << "\n";
        if (ms == 4)
            cout << "MS" << "\n";
        if (tk == 4)
            cout << "TK" << "\n";
    }

    else {
        if (mr == ml && tk > 0)
            cout << "TK" << "\n";
        else if (tr == tl && ms > 0)
            cout << "MS" << "\n";
        else
            cout << "?" << "\n";
    }
}
*/