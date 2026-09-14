class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<vector<int>> arr(101);
        for(int i=0 ; i<nums.size() ; i++){
            arr[nums[i]].push_back(i);
        }
        int c = 0;
        for(int i=0 ; i<=100 ; i++){
            if(arr[i].size() == 3){
                c += (arr[i][1] - arr[i][0] == arr[i][2] - arr[i][1]);
            }
        }
        return c;



        // vector<int> arr(101);
        // for(int i:nums) arr[i]++;
        // int c = 0;
        // for(int i=0 ; i<nums.size() ; i++){
        //     int i1 = nums[i];
        //     if(arr[i1] == 3){
        //         int i2 = 0 , i3 = 0;
        //         for(int j=i+1 ; j<nums.size() ; j++){
        //             if(nums[j] == i1){
        //                 if(!i2) i2 = j;
        //                 else i3 = j;
        //             }
        //         }
        //         c += (i2 - i == i3 - i2);
        //     }
        // }
        // return c;




        // vector<int> arr(101);
        // for(int i:nums) arr[i]++;
        // int c = 0;
        // for(int i=0 ; i<nums.size() ; i++){
        //     for(int j=i+1 ; j<nums.size() ; j++){
        //         for(int k=j+1 ; k<nums.size() ; k++){
        //             if(nums[i] == nums[j] && nums[i] == nums[k] && arr[nums[i]] == 3){
        //                 c += (j - i == k - j);
        //             }
        //         }
        //     }
        // }
        // return c;
    }
};