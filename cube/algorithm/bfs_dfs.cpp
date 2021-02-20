#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int N, M, V;

void dfs(int now) {

    cout << now << ' ';
    visited[now] = true;

    for (int i : graph[now]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        cout << now << " ";
        for (int next : graph[now]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }

}

int main() {
    cin >> N >> M >> V;

    //1 부터 탐색을 할것이므로 N + 1 로 크기를 정해준다(0부터 한다면 N 으로 크기를 정한다)
    graph.resize(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        //"양방향" 그래프 생성
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);

    cout << "\n";
    fill(visited.begin(),visited.end(),false);

    bfs(V);

}