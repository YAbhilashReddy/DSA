class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> st;
        sort(nums.begin() , nums.end());
        int i=0 , j=nums.size()-1;
        while(i <= j){
            double avg = (double)(nums[i++] + nums[j--]) / 2;
            st.insert(avg);
        }
        return st.size();
    }
};