
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
using namespace std;
struct Node { int v, cost; };
int n, m, dist[1001];
vector <Node> graph[1001];

int bfs(int start, int end) {
    queue <int> q;
    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (auto next : graph[x]) {
            if (dist[next.v] >= 0) continue;
            dist[next.v] = dist[x] + next.cost;
            q.push(next.v);
        }
    }
    return dist[end];
}

int main() {
    cin >> n >> m;
    for (int i = 0, u, v, cost; i < n - 1; i++) {
        cin >> u >> v >> cost;
        graph[u].push_back({ v,cost });
        graph[v].push_back({ u,cost });
    }


    while (m--) {
        int start, end;
        cin >> start >> end;
        memset(dist, -1, sizeof(dist));
        cout << bfs(start, end) << '\n';
    }
}*/