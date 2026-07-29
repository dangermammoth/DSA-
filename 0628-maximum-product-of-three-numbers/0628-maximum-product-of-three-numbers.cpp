class Solution {
public:
    int maximumProduct(vector<int>& v ) {
       sort(v.begin(),v.end());
       int n=v.size();

       long long p1=v[0]*v[1]*v[2];
       long long p2=v[n-3]*v[n-2]*v[n-1];
       long long p3=v[0]*v[n-1]*v[1];
       long long p4=v[0]*v[n-1]*v[n-2];
       long long ans1=max(p1,p2);
       long long ans2=max(p3,p4);
       return max(ans1,ans2);
       
    }
};