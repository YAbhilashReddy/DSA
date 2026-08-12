class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> pq; //we are storing with indices
        for(int i=0 ; i<k ; i++) pq.push({nums[i] , i});
        ans.push_back(pq.top().first);
        for(int i=k ; i<nums.size() ; i++){
            pq.push({nums[i] , i});
            while(pq.top().second <= (i-k)) pq.pop(); // removing top elements out of window
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};