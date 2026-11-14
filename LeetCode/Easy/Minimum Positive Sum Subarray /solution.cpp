class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<vector<int>> subarrays;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i ; j < nums.size() ; j++){
                vector<int> temp;
                for(int k = i ; k <= j ; k++) temp.push_back(nums[k]);
                subarrays.push_back(temp);
            }
        }
        int ans = INT_MAX;
        for(auto subarray : subarrays){
            if(subarray.size() >= l && subarray.size() <= r) {
                int sum = accumulate(subarray.begin() , subarray.end() , 0);
                if(sum > 0) ans = min(sum , ans);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};