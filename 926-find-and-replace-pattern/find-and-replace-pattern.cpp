class Solution {
public:
    vector<int> wordpattern(string s){
        if(s.empty()) return {};
        vector<int> ans;
        int idx = 0;
        unordered_map<char,int> freq;
        for(int i=0 ; i<s.length() ; i++){
            if(freq.find(s[i]) == freq.end()) freq[s[i]] = idx , idx++ , ans.push_back(freq[s[i]]);
            else ans.push_back(freq[s[i]]);
        }
        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        vector<int> code = wordpattern(pattern);
        for(string word:words){
            vector<int> patternwords = wordpattern(word);
            if(code == patternwords) ans.push_back(word);
        }
        return ans;
    }
};