class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt=0;
        int bal=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                bal++;
            }
            else bal--;
            if(bal==1 || bal==-1|| bal==0)cnt++;
        }
        return cnt;
    }
};