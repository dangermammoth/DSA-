class Solution {
public:
    int countMajoritySubarrays(vector<int>& v, int t) {
        int n = v.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (v[j] == t) cnt++;
                int len = j - i + 1;
                if (2 * cnt > len) total++;
            }
        }
        return total;
    }
};
