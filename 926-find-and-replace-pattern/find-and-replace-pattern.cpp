class Solution {
public:
    string strPattern(string s){
        if(s.empty()) return "";
        string res = "";
        vector<int> arr(26 , 0);
        int setBit = 1;
        for(char c:s){
            if(!arr[c - 'a']) arr[c - 'a'] = setBit++;
            res.push_back(arr[c - 'a'] + '0');
        }
        return res;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        string patternCode = strPattern(pattern);
        for(string word:words){
            if(patternCode == strPattern(word)) ans.push_back(word);
        }
        return ans;
    }





    // vector<int> wordPattern(string s){
    //     if(s.empty()) return {};
    //     vector<int> res;
    //     unordered_map<char,int> freq;
    //     int idx = 0;
    //     for(char c:s){
    //         if(freq.find(c) == freq.end()) freq[c] = idx , idx++ , res.push_back(freq[c]);
    //         else res.push_back(freq[c]);
    //     }
    //     return res;
    // }

    // vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    //     vector<string> ans;
    //     vector<int> patternCode = wordPattern(pattern);
    //     for(string word:words){
    //         vector<int> wordCode = wordPattern(word);
    //         if(wordCode == patternCode) ans.push_back(word);
    //     }
    //     return ans;
    // }


};