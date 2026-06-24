class Solution {
public:
    int minIncrementForUnique(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(v[i]<=v[i-1]){
                int x=v[i];
                v[i]=(v[i-1]-v[i])+v[i]+1;
                cnt=cnt+v[i]-x;
            }
        }
        return cnt;
        
    }
};