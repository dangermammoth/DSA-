class Solution {
public:
    string rearrangeString(string s, char x, char y) {
       

        string xc="";
        string yc="";
        string otherc="";

        for(char c:s){
            if(c==y)yc=yc+c;
            else if(c==x)xc=xc+c;
            else otherc=otherc+c;
        }
      
      return yc+otherc+xc;




    }
};