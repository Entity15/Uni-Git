#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ks(int W, const vector<int>& kg, const vector<int>& pr) {
    int n = kg.size();
    vector<int> dp(W+1, 0);

    for(int i = 0; i < n; i++) {
        for(int w = W; w >= kg[i]; w--) {
            dp[w] = max(dp[w], dp[w - kg[i]] + pr[i]);
        }
    }
    return dp[W];
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> pr(n), kg(n);
        for (int i = 0; i < n; i++) {
            cin >> pr[i] >> kg[i];
        }
        int p; cin >> p;
        int total = 0;
        for (int i = 0; i < p; i++) {
            int capacity; cin >> capacity;
            total += ks(capacity, kg, pr);
        }
        cout << total << "\n";
    }
    return 0;
}
