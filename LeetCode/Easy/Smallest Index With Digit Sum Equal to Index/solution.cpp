class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0 ; i<nums.size() ; i++){
            int N = nums[i] , sum = 0;
            while(N != 0){
                sum += N % 10;
                N /= 10;
            }
            if(i == sum) return i;
        }
        return -1;
    }
};