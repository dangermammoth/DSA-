class Solution {
public:
    long long maxSum(vector<int>& v, int k, int mul) {
        sort(v.begin(),v.end(),greater<int>());

        long long sum=0;
        for(int i=0;i<k;i++){
            if(mul>0){
                sum=sum+(1LL*v[i]*mul);
                mul--;
            }
            else sum=sum+v[i];
        }
        return sum;
    }
};