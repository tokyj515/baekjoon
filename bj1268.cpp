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
typedef pair<int, int> PII;

/*
int arr[1001][6];
int cnt[1001];
int check[1001];

int main() {
	int t;
	cin >> t;


	for (int i = 1; i <= t; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> arr[i][j];
		}
	}






	return 0;
}*/


/*
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int arr[1001][6];
  int cnt[1001]; // counter

  int n;
  cin >> n;

  // 초기화
  for(int i = 1; i <= n; i++){
      cnt[i] = 0;
  }
  // 입력
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 5; j++){
      int num;
      cin >> num;

      arr[i][j] = num;
    }
  }

  // 비교
  for(int i = 1; i <= n; i++){ // 학생 수
    for(int j = 1; j <= n; j++){ // 다른 학생
      for(int k = 1; k <= 5; k++){ // 학년
        if(arr[i][k] == arr[j][k]){
          cnt[i]++;
          break;
        }
      }
    }
  }

  int max = 0;
  int max_student = 0;
  for(int i = 1; i<= n; i++){
    if(cnt[i] > max){
      max = cnt[i];
      max_student = i;
    }
    // 여러명인 경우
    else if(cnt[i] == max){
      if(max_student > i){
        max_student = i;
      }
    }
  }

  cout << max_student << endl;
  return 0;
}

*/