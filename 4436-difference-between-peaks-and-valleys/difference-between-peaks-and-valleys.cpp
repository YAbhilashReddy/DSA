class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n = nums.size() , peak = 0 , valley = 0;
        for(int i = 1 ; i < n - 1 ; i++){
            bool peakconditions = nums[i] > nums[i-1] && nums[i] > nums[i+1];
            bool valleyconditions = nums[i] < nums[i-1] && nums[i] < nums[i+1];
            if(peakconditions) peak += nums[i];
            if(valleyconditions) valley += nums[i];
        }
        return peak - valley;
    }
};