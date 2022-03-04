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

    int t;
    scanf("%d", &t);


    while (t--) {

        deque<int>dq;
        bool reverse = false;
        bool error = false;
        int n;
        string commands;
        string numarr;
        string temp = ""; //숫자가 2자리수 이상


        cin >> commands;
        scanf("%d", &n);
        cin >> numarr;


        for (int i = 0; i < numarr.size(); i++) {
            char c = numarr[i];


            if (c == '[') {
                continue;
            }
            else if ('0' <= c && c <= '9') {
                temp += c;
            }
            else if (c == ',' || c == ']') {
                if (!temp.empty()) {
                    dq.push_back(stoi(temp));
                    temp.clear();
                }
            }
        }



        for (int i = 0; i < commands.size(); i++) {

            char cmd = commands[i];
         
            if (cmd == 'R') {
                if (reverse) {
                    reverse = false;
                }
                else {
                    reverse = true;
                }
                
            }

            else if(cmd == 'D') {
                
                if (dq.empty()) {
                    printf("error\n");
                    error = true;
                    break;
                }
                if (reverse) {
                    dq.pop_back();
                }
                else {
                    dq.pop_front();
                }

            }
        }





        if (error) continue;
        else  {
            
            if (reverse) {
                printf("[");
                while (!dq.empty()) {

                    printf("%d", dq.back());
                    dq.pop_back();
                    if (!dq.empty())
                        printf(",");
                }
                printf("]");
            }

            else {
                printf("[");
                while (!dq.empty()) {
                    printf("%d", dq.front());
                    dq.pop_front();
                    if (!dq.empty())
                        printf(",");
                }
                printf("]");
            }
        }
        printf("\n");
    }
    return 0;
}*/