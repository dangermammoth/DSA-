class Solution {
public:
const long long MOD = 1e9+7;
long long modPow(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}
    int countGoodNumbers(long long n) {
        long long evencnt=(n+1)/2; 
        long long oddcnt=(n)/2;
         long long ans = (modPow(5, evencnt) * modPow(4, oddcnt)) % MOD;
         return ans; 
    }
};