class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long x=0;
        long long p10=1;
        int d;
        while(n>0){
            d=n%10;
            sum=sum+d;
            if(d!=0){
                x=x+(d*p10);
                p10=p10*10;
            }
        n=n/10;
        }
        return x*sum;
    }
};