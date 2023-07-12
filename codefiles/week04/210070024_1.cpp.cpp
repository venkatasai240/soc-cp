#include <iostream>
#include <vector>

using namespace std;
const int maxN = 1e5 + 1;

int N, M, a, b;
vector<int> p(maxN), ds(maxN), ans;
vector<vector<int>> G(maxN);

void dfs(int u) {
    for (int v : G[u]) {
        if (v != p[u]) {
            p[v] = u;
            dfs(v);
        }
    }
}

int find(int u) {
    if (ds[u] < 0)
        return u;
    ds[u] = find(ds[u]);
    return ds[u];
}

bool merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v)
        return false;
    if (ds[u] < ds[v])
        swap(u, v);
    ds[v] += ds[u];
    ds[u] = v;
    return true;
}

int main() {
    cin >> N >> M;
    fill(ds.begin() + 1, ds.begin() + N + 1, -1);
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        if (!merge(a, b)) {
            dfs(a);

            int u = b;
            while (u != 0) {
                ans.push_back(u);
                u = p[u];
            }

            int K = ans.size();
            cout << K + 1 << endl;
            for (int j = K - 1; j >= 0; j--)
                cout << ans[j] << " ";
            cout << b << endl;

            return 0;
        } else {
            G[a].push_back(b);
            G[b].push_back(a);
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
