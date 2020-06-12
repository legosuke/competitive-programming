#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

class MagicNumberThree {
public:
    int countSubsequences(string s) {
        vector<vector<int>> dp(s.size() + 1, vector<int>(3, 0));
        dp[0][0] = 1;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 0; j < 3; ++j) {
                (dp[i + 1][j] += dp[i][j]) %= MOD;
                (dp[i + 1][(j + (s[i] - '0')) % 3] += dp[i][j]) %= MOD;
            }
        }
        return (dp[s.size()][0] + MOD - 1) % MOD;
    }
};