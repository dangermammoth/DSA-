class Solution {
public:
    int findGCD(vector<int>& v) {
    int minVal = *min_element(v.begin(), v.end());

    
    int maxVal = *max_element(v.begin(), v.end());

    return __gcd(minVal,maxVal);
    }
};