class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]) nums[i] *= 2 , nums[i+1] = 0;
        }
        for(int i=0 , j=0 ; j<nums.size() ; j++){
            if(nums[j]) swap(nums[i++] , nums[j]);
        }
        return nums;



        // for(int i=0 ; i<nums.size()-1 ; i++){
        //     if(nums[i] == nums[i+1]) nums[i] *= 2 , nums[i+1] = 0;
        // }
        // vector<int> ans;
        // int c = 0;
        // for(int i:nums) {
        //     if(i) ans.push_back(i);
        //     else c++;
        // }
        // for(int i=0 ; i<c ; i++) ans.push_back(0);
        // return ans;
    }
};