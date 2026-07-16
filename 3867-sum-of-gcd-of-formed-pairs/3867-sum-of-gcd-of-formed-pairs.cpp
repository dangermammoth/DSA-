#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& v) {
        int n = v.size();
        long long mx = v[0];
        vector<long long> pgcd(n);

        for (int i = 0; i < n; i++) {
            mx = max(mx, (long long)v[i]);
            pgcd[i] = gcd((long long)v[i], mx);
        }

        sort(pgcd.begin(), pgcd.end());

        long long sum = 0;

        int i = 0, j = n - 1;
        while (i < j) {
            sum += gcd(pgcd[i], pgcd[j]);
            i++;
            j--;
        }

        return sum;
    }
};