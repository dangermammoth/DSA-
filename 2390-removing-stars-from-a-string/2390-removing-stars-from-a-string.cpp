class Solution {
public:
    string removeStars(string s) {

   
       int j=0;
        for(char c:s){
           if(c!='*'){
            s[j]=c;
            j++;
           }
           else j--;
        }

        s.resize(j);
        return s;
    }
};