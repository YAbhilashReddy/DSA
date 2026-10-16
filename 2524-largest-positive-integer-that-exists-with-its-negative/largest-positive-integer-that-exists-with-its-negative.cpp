class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i=0 , j=nums.size()-1;
        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum == 0) return nums[j];
            else if(sum < 0) i++;
            else j--;
        }
        return -1;




        // sort(nums.begin() , nums.end());
        // int i = 0 , j = nums.size()-1;
        // while(i < j){
        //     int x = abs(nums[i]) , y = abs(nums[j]);
        //     if(x == y && i != j && nums[i] != nums[j]) return x;
        //     else if(x < y) j--;
        //     else i++;
        // }
        // return -1;
    }
};