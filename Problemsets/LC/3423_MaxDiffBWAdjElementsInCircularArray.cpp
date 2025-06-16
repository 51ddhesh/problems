#include "headers/headers.hpp"

class Solution {
    public:
        int maxAdjacentDistance(vector<int>& v) {
            int n = v.size();
            int ans = abs(v[n - 1] - v[0]);
            for (int i = 0; i < n - 1; i++) {
                ans = max(ans, abs(v[i + 1] - v[i]));
            }
            return ans;
        }
};