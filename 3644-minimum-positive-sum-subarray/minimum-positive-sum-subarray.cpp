class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size() , ans = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++) {
                sum += nums[j];
                int len = j - i + 1;
                if(len >= l && len <= r && sum > 0) ans = min(ans , sum);
            }
        }
        return ans == INT_MAX ? -1 : ans;



        // vector<vector<int>> subarrays;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     for(int j = i ; j < nums.size() ; j++){
        //         vector<int> temp;
        //         for(int k = i ; k <= j ; k++) temp.push_back(nums[k]);
        //         subarrays.push_back(temp);
        //     }
        // }
        // int ans = INT_MAX;
        // for(auto subarray : subarrays){
        //     if(subarray.size() >= l && subarray.size() <= r) {
        //         int sum = accumulate(subarray.begin() , subarray.end() , 0);
        //         if(sum > 0) ans = min(sum , ans);
        //     }
        // }
        // return ans == INT_MAX ? -1 : ans;
    }
};