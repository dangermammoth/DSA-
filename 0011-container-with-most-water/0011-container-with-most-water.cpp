class Solution {
public:
    int maxArea(vector<int>& v) {
        
        int n=v.size();
        int i=0;
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int water=min(v[i],v[j])*(j-i);
            maxwater=max(maxwater,water);
            if(v[i]<v[j]) i++;
            else j--;
        }
        
        return maxwater;
    }
};