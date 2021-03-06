#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 1e4;
int n, weight;
int v[maxn], w[maxn], dp[maxn];
int main() {
    cin >> n >> weight;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = weight; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
        }
    }
    cout << dp[weight];
    return 0;
}