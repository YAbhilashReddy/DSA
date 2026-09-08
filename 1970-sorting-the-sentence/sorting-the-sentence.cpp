class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        map<int,string> freq;
        while(ss >> word){
            int n = word.back() - '0';
            word.erase(word.length()-1 , 1);
            freq[n] = word;
        }
        string ans = "";
        for(auto[k,v]:freq) ans += v + ' ';
        ans.pop_back();
        return ans;
    }
};