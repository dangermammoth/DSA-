class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        map<int, int> mpp;

        for (long long a = 1; a <= 1000; a++) {
            long long a3 = a * a * a;

            for (long long b = a; b <= 1000; b++) {
                long long sum = a3 + b * b * b;

                if (sum > n)
                    break;

                mpp[(int)sum]++;
            }
        }

        vector<int> ans;

        for (auto &it : mpp) {
            if (it.second >= 2)
                ans.push_back(it.first);
        }

        return ans;
    }
};