class Solution {
public:
    bool isGoodArray(vector<int>& v) {
        int gcdans=v[0];
        for(int i=0;i<v.size();i++){
            gcdans=__gcd(v[i],gcdans);
        }
        return (gcdans==1);
    }
};