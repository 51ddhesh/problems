#include "./headers/headers.hpp"

class Solution {
    public:
        int maxDifference(string s) {
            unordered_map<char, int> m;
            for (char &c : s) m[c]++;
            int maxOdd = 1, minEven = s.size();
            
            for (const auto& [_, i] : m) {
                if (i & 1) maxOdd = max(maxOdd, i);
                else minEven = min(minEven, i);
            }

            return maxOdd - minEven;
        }
};