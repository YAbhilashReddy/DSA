class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums) freq[i]++;
        vector<pair<int,int>> st(freq.begin() , freq.end());
        sort(st.begin() ,st.end() , [](pair<int,int> &a , pair<int,int> &b){
            if(a.second == b.second) return a.first > b.first;
            return a.second < b.second;
        });
        vector<int> ans;
        for(auto[k,v]:st) ans.insert(ans.end() , v,k);
        return ans;
    }
};