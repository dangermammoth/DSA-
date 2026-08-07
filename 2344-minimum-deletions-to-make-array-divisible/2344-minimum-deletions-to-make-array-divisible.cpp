class Solution {
public:
    int minOperations(vector<int>& v, vector<int>& nums) {

        sort(v.begin(), v.end());
        int g = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            g = gcd(g, nums[i]);
        }

        for(int i=0;i<v.size() && v[i]<=g ;i++){
            if(g%v[i]==0) return i;
         }
         return -1;
    }   
};