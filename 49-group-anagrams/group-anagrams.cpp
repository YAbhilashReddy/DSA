class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //map<vector<int> , vector<string>> mp;
        //for(string str:strs){
        //    vector<int> arr(26 , 0);
        //    for(char c:str) arr[c - 'a']++;
        //    mp[arr].push_back(str);
        //}
        //vector<vector<string>> ans;
        //for(auto it:mp) ans.push_back(it.second);
        //return ans;

        unordered_map<string , vector<string>> ans;
        for(string &str:strs){
            string s = str;
            sort(s.begin() , s.end());
            ans[s].push_back(str);
        }
        vector<vector<string>> res;
        for(auto &i:ans) res.push_back(i.second);
        return res;
    }
};