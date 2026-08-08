class Solution {
public:
    vector<int> findLonely(vector<int>& v) {
        unordered_map<int, int> freq;

        for (int x : v)
            freq[x]++;

        vector<int> ans;

        for (int a : v) {
            if (freq[a] == 1 &&
                freq.find(a - 1) == freq.end() &&
                freq.find(a + 1) == freq.end()) {
                ans.push_back(a);
            }
        }

        return ans;
    }
};