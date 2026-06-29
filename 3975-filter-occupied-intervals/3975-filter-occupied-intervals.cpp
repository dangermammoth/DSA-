class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& oi, int fs, int fe) {
        if(oi.empty()) return {};

        sort(oi.begin(),oi.end());
        vector<vector<int>> merged;
        for (auto& interval : oi) {
            if (merged.empty() || merged.back()[1] + 1 < interval[0]) {
                merged.push_back(interval);
            } else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        // till now merged is done

        vector<vector<int>>result;

        for(int i=0;i<merged.size();i++){
            if(merged[i][0]>fe || merged[i][1]<fs) result.push_back(merged[i]);

             else if (merged[i][0] < fs && merged[i][1] >= fs) {
        result.push_back({merged[i][0], fs - 1});
        if (merged[i][1] > fe) {
            result.push_back({fe + 1, merged[i][1]});
        }
    }

     else if (merged[i][0] <= fe && merged[i][1] > fe) {
        result.push_back({fe + 1, merged[i][1]});
    }
        }


    return result;
    }
};