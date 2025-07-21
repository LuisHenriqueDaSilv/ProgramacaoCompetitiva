#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 2e5 + 5;

vector<int> tree[MAXN];
bool visited[MAXN];
int max_dist = 0;
int farthest_node = 0;

void dfs(int node, int dist) {
    visited[node] = true;

    if (dist > max_dist) {
        max_dist = dist;
        farthest_node = node;
    }

    for (int neighbor : tree[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, dist + 1);
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    memset(visited, 0, sizeof(visited));
    max_dist = 0;
    dfs(1, 0);

    memset(visited, 0, sizeof(visited));
    max_dist = 0;
    dfs(farthest_node, 0);

    cout << max_dist << endl;

    return 0;
}


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solution(root, ans);
        return ans;
    }

public:
    void solution(TreeNode* root, vector<int> ans){
        if(!root){
            return;
        }
        solution(root->left, ans);
        ans.push_back(root->val);
        solution(root->right,ans);
    }

};