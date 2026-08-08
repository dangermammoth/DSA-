class Solution {
public:
    int minSetSize(vector<int>& v) {
        unordered_map<int,int>freq;
        for(int x:v)freq[x]++;

        priority_queue<int>q;
        for (auto c:freq){
            q.push(c.second);
        }
        int setele=0;
        int rem=0;
        while(rem<(v.size()/2)){
            rem+=q.top();
            q.pop();
            setele++;
        }

        return setele;
    }
};