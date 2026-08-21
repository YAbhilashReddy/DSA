class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        set<vector<int>> ans;
        for(int i = 0 ; i < nums.size()-2 ; i++){
            int l = i+1 , r = nums.size()-1;
            while(l < r){
                int x = nums[i] + nums[l] + nums[r];
                if(x == 0) ans.insert({nums[i] , nums[l] , nums[r]}) , l++ , r--;
                else if(x < 0) l++;
                else r--;
            }
        }
        vector<vector<int>> a;
        for(auto i:ans) a.push_back(i);
        return a;
    }
};