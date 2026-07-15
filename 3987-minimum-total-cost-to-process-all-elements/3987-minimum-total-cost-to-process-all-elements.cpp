class Solution {
public:
    int minimumCost(vector<int>& v, int k) {
        int n = v.size();
        const long long MOD = 1000000007;
        long long r = k;
        long long cnt = 0;

        for (int i = 0; i < n; i++) {
            if (r < v[i]) {
                long long need = v[i] - r;
                long long add = (need + k - 1) / k;
                cnt += add;
                r += add * k;
            }
            r -= v[i];
        }

        long long ans = (cnt % MOD) * ((cnt + 1) % MOD) % MOD;
        ans = ans * ((MOD + 1) / 2) % MOD;
        return (int)ans;
    }
};
