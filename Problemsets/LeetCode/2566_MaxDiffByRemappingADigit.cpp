#include "headers/headers.hpp"  

class Solution {
    public:
        int minMaxDifference(int n) {
            string s = to_string(n);
            string t(s);
            auto k = s.find_first_not_of('9');
            if (k != string::npos) {
                char a = s[k];
                replace(s.begin(), s.end(), a, '9');
            }
            char b = t[0];
            replace(t.begin(), t.end(), b, '0');
            return stoi(s) - stoi(t);
        }
};
