class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> arr;
        int second = INT_MIN;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            if(nums[i] < second) return true;
            while(!arr.empty() && nums[i] > arr.back()){
                second = arr.back();
                arr.pop_back();
            }
            arr.push_back(nums[i]);
        }
        return false;
    }
};