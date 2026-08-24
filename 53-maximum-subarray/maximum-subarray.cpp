class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 , maxSum = INT_MIN;
        for(int i:nums) sum = max(sum + i , i) , maxSum = max(maxSum , sum);
        return maxSum;

        //int sum = 0 , maxSum = INT_MIN;
        //for(int i:nums){
        //    sum += i;
        //    maxSum = max(sum , maxSum);
        //    sum = (sum < 0) ? 0 : sum;
        //}
        //return maxSum;
    }
};