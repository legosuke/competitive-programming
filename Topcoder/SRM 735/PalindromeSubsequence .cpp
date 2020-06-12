#include <bits/stdc++.h>
using namespace std;

class PalindromeSubsequence {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size() / 2; ++i) {
            if (s[i] != s[s.size() - i - 1]) return false;
        }
        return true;
    }
    vector <int> optimalPartition(string s) {
        vector<int> res;
        if (isPalindrome(s)) {
            res.resize(s.size(), 1);
        } else {
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == s[0]) res.push_back(1);
                else res.push_back(2);
            }
        }
        return res;
    }
};