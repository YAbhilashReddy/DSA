class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        double mini = INT_MAX;
        int n = nums.size();
        for(int i=0 ; i<n/2 ; i++){
            double avg = (double)((nums[i] + nums[n-i-1]) / 2.0);
            mini = min(mini , avg);
        }
        return mini;
    }
};