class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int sum = 0 , maxi = INT_MIN;
        for(int i:arr){
            sum = max(i , sum + i);
            maxi = max(maxi , sum);
        }
        return maxi;
    }
};