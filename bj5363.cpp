#include <iostream>
#include <string>
#include <sstream>      // stringstream
#include <vector>
#include <algorithm>

using namespace std;



/*
int main() {

    int test;
    cin >> test;
    cin.ignore();

    for (int i = 0; i < test; i++) {
        string str;
        getline(cin, str);

        vector<string> vec;

        stringstream ss; // 공백 기준으로 문자열을 짜른다.
        ss.str(str);

        string word;
        while (ss >> word) {
            vec.push_back(word);
        }

        for (int i = 2; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << vec[0] << " " << vec[1] << "\n";
    }
    return 0;
}
*/