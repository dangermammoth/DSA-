class Solution {
public:
     const int MOD=1e9+7;
    int valueAfterKSeconds(int n, int k) {
       vector<int>pfs(n,1);
       while(k--){
        for(int i=1;i<n;i++){
            pfs[i]=(pfs[i]+pfs[i-1])%MOD;
        }
       }
    return pfs[n-1];
    }
};