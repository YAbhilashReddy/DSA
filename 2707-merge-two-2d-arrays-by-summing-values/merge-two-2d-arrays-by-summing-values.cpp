class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i = 0 , j = 0;
        while(i < nums1.size() && j < nums2.size()){
            int A = nums1[i][0] , B = nums2[j][0];
            if(A == B) {
                int sum = nums1[i][1] + nums2[j][1];
                ans.push_back({nums1[i][0] , sum});
                i++ , j++;
            } else if(A < B) ans.push_back(nums1[i++]);
            else ans.push_back(nums2[j++]);
        }
        while(i < nums1.size()) ans.push_back(nums1[i++]);
        while(j < nums2.size()) ans.push_back(nums2[j++]);
        return ans;
    }
};