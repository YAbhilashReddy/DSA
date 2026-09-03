class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;
        for(int i:nums1) {
            if(i % 2 == 1) minOdd = min(minOdd , i);
        }
        for(int i:nums1) {
            if(i % 2 == 0 && minOdd != INT_MAX && i < minOdd) return false;
        }
        return true;




        // int n = nums1.size() , even = 0 , odd = 0 , mini = INT_MAX;
        // for(int i:nums1){
        //     even += (i % 2 == 0) , odd += (i % 2) , mini = min(mini , i);
        // }
        // if(even != n && odd != n) {
        //     for(int i=0 ; i<n ; i++){
        //         if(nums1[i] % 2 == 0 && (nums1[i] - mini) % 2 == 0) return false;
        //     }
        // }
        // return true;
    }
};