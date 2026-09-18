class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target) return true;
            else if(nums[low] < nums[mid]){
                if(nums[low] <= target && target <= nums[mid]) high = mid - 1;
                else low = mid + 1;
            } else if(nums[low] == nums[mid]) low++ , mid--;
            else {
                if(nums[mid] < target && target <= nums[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return false;




        //for(int i=0 ; i<nums.size() ; i++){
        //    if(nums[i] == target) return true;
        //}
        //return false;
    }
};