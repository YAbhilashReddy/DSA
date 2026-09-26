class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string , string> freq;
        for(auto &x:knowledge) freq[x[0]] = x[1];
        string ans = "";
        int start = -1;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i] == '(') start = i;
            else if(s[i] == ')'){
                string x = s.substr(start+1 , i-start-1);
                if(freq.count(x)) ans += freq[x];
                else ans.push_back('?');
                start = -1;
            } else if(start == -1) ans.push_back(s[i]);
        }
        return ans;
    }
};