class Solution {
public:
    long long maxPairStrength(vector<int>& v) {
        int n=v.size();
        long long ans=0;
       for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              long long g=__gcd(v[i],v[j]);
              g=g*g;
             long long mul=(long long )v[i]*v[j];
             ans=max(ans,mul/g);
            }
       } 
       return ans;
    }
};