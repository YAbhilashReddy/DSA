class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string S = "";
        for(string word:words){
            S += word;
            if(S == s) return true;
        }
        return false;
    }
};