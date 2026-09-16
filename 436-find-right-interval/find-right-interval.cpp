class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<vector<int> , int> arr;
        for(int i=0 ; i<intervals.size() ; i++) arr[intervals[i]] = i;
        vector<vector<int>> mat(intervals.begin() , intervals.end());
        sort(mat.begin() , mat.end());
        vector<int> ans;
        for(int i=0 ; i<intervals.size() ; i++) {
            int end = intervals[i][1];
            auto it = lower_bound(mat.begin() , mat.end() , vector<int>{end});
            if(it == mat.end()) ans.push_back(-1);
            else ans.push_back(arr[*it]);
        }
        return ans;
    }
};