class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> arr(20001 , 0);
        for(int i:nums) arr[i + 10000]++;
        int sum = 0 , pick = 1;
        for(int i=0 ; i<20001 ; i++){
            while(arr[i]){
                if(pick) sum += i - 10000;
                arr[i]--;
                pick = !pick;
            }
        }
        return sum;


        // sort(nums.begin() , nums.end());
        // int total = 0;
        // for(int i=0 ; i<nums.size() ; i+= 2) total += nums[i];
        // return total;
    }
};