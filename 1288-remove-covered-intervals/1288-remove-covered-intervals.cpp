class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
    if (a[0] == b[0]) return a[1] > b[1];
    return a[0] < b[0];
});

    int cnt=0;
    int maxr=-1;
    for(int i=0;i<intervals.size();i++){

        int r=intervals[i][1];

        if(r>maxr){
            maxr=r;
            cnt++;
        }
     }
     return cnt;
    }
};