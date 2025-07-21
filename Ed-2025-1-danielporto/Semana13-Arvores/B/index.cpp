#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 2e5 + 5;

vector<int> tree[MAXN];
int subordinados[MAXN];

int dfs(int u) {
    int total = 0;
    for (int v : tree[u]) {
        total += dfs(v) + 1;
    }
    subordinados[u] = total;
    return total;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int chefe;
        cin >> chefe;
        tree[chefe].push_back(i);
    }

    dfs(1);

    for (int i = 1; i <= n; i++) {
        cout << subordinados[i] << " ";
    }

    cout << endl;
    return 0;
}