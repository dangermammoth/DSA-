class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
         int n = nums.size();
    vector<int> prefixMax(n);
    prefixMax[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i-1], nums[i]);
    }
    int ans = INT_MIN;
    for (int j = k; j < n; j++) {
        ans = max(ans, nums[j] + prefixMax[j-k]);
    }
    return ans;
    }
};