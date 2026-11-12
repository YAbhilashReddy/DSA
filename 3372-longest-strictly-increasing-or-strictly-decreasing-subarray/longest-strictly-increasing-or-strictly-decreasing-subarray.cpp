class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size() , increasing = 1 , maxIncreasing = INT_MIN;
        int decreasing = 1 , maxDecreasing = INT_MIN;
        for(int i = 0 ; i < n-1 ; i++) {
            //INCREASING
            if(nums[i] > nums[i+1]) increasing++;
            else maxIncreasing = max(maxIncreasing , increasing) , increasing = 1;
            
            //DECREASING
            if(nums[i] < nums[i+1]) decreasing++;
            else maxDecreasing = max(maxDecreasing , decreasing) , decreasing = 1;

        }
        maxIncreasing = max(maxIncreasing , increasing) , increasing = 1;
        maxDecreasing = max(maxDecreasing , decreasing);
        
        return max(maxIncreasing , maxDecreasing);
    }
};