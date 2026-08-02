class Solution {
public:
    int countRatioSubarrays(vector<int>& v, int a, int b) {
        int n=v.size();

        vector<int>prefeven(n+1,0);
        vector<int>prefodd(n+1,0);

        for(int i=0;i<n;i++){
             prefeven[i + 1] = prefeven[i];
            prefodd[i + 1] = prefodd[i];

            if (v[i] % 2 == 0)
                prefeven[i + 1]++;
            else
                prefodd[i + 1]++;
        }


        long long ans=0;
        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                 int even=prefeven[r+1]-prefeven[l];
                 int odd=prefodd[r+1]-prefodd[l];

              if (odd > 0 && 1LL * even * b <= 1LL * odd * a)ans++;
            }
        }
        return ans;
    }
};