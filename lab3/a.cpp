#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<long long> nums(t);
    for (int i = 0; i < t; i++) {
        cin >> nums[i];
    }

    int n, m;
    cin >> n >> m;

    vector<vector<long long>> matrix(n, vector<long long>(m));
    unordered_map<long long, pair<int, int>> coords; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            coords[matrix[i][j]] = {i, j};
        }
    }

    for (long long x : nums) {
        if (coords.find(x) != coords.end()) {
            cout << coords[x].first << " " << coords[x].second << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
