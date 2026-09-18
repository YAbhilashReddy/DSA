class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size() , c = 0;
        for(int i=0 ; i<n-2 ; i++){
            for(int j=i+1 ; j<n-1 ; j++){
                int ab = nums[i] + nums[j];
                int k = lower_bound(nums.begin() + j + 1 , nums.end() , ab) - nums.begin();
                c += k - j - 1;
            }
        }
        return c;


        // sort(nums.begin() , nums.end());
        // int c = 0;
        // for(int i=0 ; i<nums.size() ; i++){
        //     for(int j=i+1 ; j<nums.size() ; j++){
        //         for(int k=j+1 ; k<nums.size() ; k++){
        //             bool a = nums[i] + nums[j] > nums[k];
        //             c += a;
        //         }
        //     }
        // }
        // return c;
    }
};