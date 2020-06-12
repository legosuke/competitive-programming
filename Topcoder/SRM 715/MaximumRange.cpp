#include <bits/stdc++.h>
using namespace std;

class MaximumRange {
public:
    int findMax(string s) {
        int nump = 0, numm = 0;
        for (char c : s) {
            if (c == '+') nump++;
            else numm++;
        }
        return max(nump, numm);
    }
};