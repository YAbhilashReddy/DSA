class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin() , ranges.end());
        vector<vector<int>> ans;
        for(auto &range:ranges){
            if(ans.empty() || ans.back()[1] < range[0]) ans.push_back(range);
            else ans.back()[1] = max(ans.back()[1] , range[1]);
        }
        int res = 1 , mod = 1e9 + 7;
        for(int i=0 ; i<ans.size() ; i++) res = (res * 2) % mod;
        return res;
    }
};