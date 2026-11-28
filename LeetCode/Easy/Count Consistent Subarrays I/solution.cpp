class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> matrixs;
        for(int i = 0 ; i < n ; i++) {
            for(int j = i ; j < n ; j++) {
                vector<int> temp;
                for(int k = i ; k <= j ; k++) temp.push_back(nums[k]);
                matrixs.push_back(temp);
            }
        }
        int c = 0;
        for(auto matrix : matrixs) {
            int mini = matrix[0] , value = matrix[0];
            for(int i = 1 ; i < matrix.size() ; i++) {
                mini = min(mini , matrix[i]);
                value &= matrix[i];
            }
            c += (mini == value);
        }
        return c;
    }
};