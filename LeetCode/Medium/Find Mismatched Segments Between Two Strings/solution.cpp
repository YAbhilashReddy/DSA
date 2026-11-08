class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        if(s1 == s2) return {};
        vector<vector<string>> ans;
        int i = 0 , j = 0;
        while(i < s1.length() && j < s2.length()){
            if(s1[i] == s2[j]) i++ , j++;
            else {
                string a = "" , b = "";
                while(i < s1.length() && j < s2.length() && s1[i] != s2[j]){
                    a.push_back(s1[i++]) , b.push_back(s2[j++]);
                }
                ans.push_back({a , b});
            }
        }
        return ans;
    }
};