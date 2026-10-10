class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //in simple words to slove this is => longest subarray whose sum equals zero problem.
        //The main trick: Replace 0 with -1 :
        //cause equal numbers of zeros and ones will cancel each other out.
        //now you can Find the longest subarray whose sum is zero.
        int n = nums.size();
        nums[0] = nums[0] == 0 ? -1 : nums[0];
        for(int i=1 ; i<n ; i++){
            if(!nums[i]) nums[i] = -1;
            nums[i] += nums[i-1];
        }
        unordered_map<int,int> freq;
        freq[0] = -1;
        int maxi = 0;
        for(int i=0 ; i<n ; i++){
            if(freq.count(nums[i])) maxi = max(maxi , i - freq[nums[i]]);
            else freq[nums[i]] = i;
        }
        return maxi;
    }
};