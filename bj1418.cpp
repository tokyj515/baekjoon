#include <iostream>

#define MAX 100010



/*
using namespace std;

int arr[MAX];

int main()
{
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]) continue; //�Ҽ��� �ƴϸ� �ǳ� ����
        for (int j = i; j <= n; j += i)
        {
            arr[j] = max(arr[j], i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] <= k) cnt++;
    }
    cout << cnt;

    return 0;
}
*/