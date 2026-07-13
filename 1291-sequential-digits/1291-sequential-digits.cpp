class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;

       

        string check="123456789";
       for(int len=2;len<=9;len++){
            for(int sti=0;sti+len<=9;sti++){
                int num=stoi(check.substr(sti,len));
                if(num>=low && num<=high) ans.push_back(num);
            }
       }
       
        return ans;
    }
};