class Solution {
public:
    string smallestPalindrome(string s) {
         int freq[26] = {0};
        for(char c : s) freq[c - 'a']++;
       

      string left="";
      string mid="";

        for(int i=0;i<26;i++){
             if(freq[i] % 2 == 1) mid = string(1, 'a' + i);
            left.append(freq[i] / 2, 'a' + i);
        }

    string right=left;
    reverse(right.begin(),right.end());
    return left+mid+right;

    }
};