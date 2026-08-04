class Solution {
public:
    vector<int> findMissingElements(vector<int>& v) {
        int n = v.size();
        vector<int> ans;

        int mn = v[0];
        int mx = v[0];

        for (int i = 1; i < v.size(); i++) {
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
        }

        vector<bool> arr(101, false);
        arr[mn]=true;
        arr[mx]=true;
        for(int i=0;i<v.size();i++){
            arr[v[i]]=true;
        }
    for(int i=mn;i<=mx;i++){
        if(arr[i]!=true) ans.push_back(i);
    }

        return ans;
    }
};