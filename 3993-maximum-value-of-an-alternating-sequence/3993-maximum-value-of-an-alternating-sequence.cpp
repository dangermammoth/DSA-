class Solution {
public:
    long long maximumValue(int n, int s, int m) {
       if(n==1) return s;

        long long inc=n/2;
        long long dec;
       if(n%2==0) dec=inc-1;
       else dec=inc;

       long long sum=(m*inc-dec)+s;
       
        if(n%2==0) return sum;
        else return sum+1;}
};