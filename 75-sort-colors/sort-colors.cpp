class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0 ; i<nums.size() ; i++){
            int idx = i;
            for(int j=i+1 ; j<nums.size() ; j++) {
                if(nums[j] < nums[idx]) idx = j;
            }
            swap(nums[i] , nums[idx]);
        }

        //sort(nums.begin() , nums.end());
    }
};