#include "headers/headers.hpp"  

class Solution {
    private:
        int count(vector<int>& v, int k) {
            int id = 0, count = 0;
            int n = v.size();
            while (id < n - 1) {
                if (v[id + 1] - v[id] <= k) {
                    count++;
                    id++;
                }
                id++;
            }
            return count;
        }

    public:
        int minimizeMax(vector<int> &v, int p) {
            sort(v.begin(), v.end());
            int n = v.size();
            int i = 0, j = v[n - 1] - v[0];
            while (i < j) {
                int m = i + (j - i) / 2;
                if (count(v, m) >= p) j = m;
                else i = m + 1;
            }
            return i;
        }
};