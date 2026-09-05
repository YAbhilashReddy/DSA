class Solution {
public:
    string leadingZeros(string &s){
        int idx = 0;
        while(idx < s.length() && s[idx] == '0') idx++;
        if(idx == s.length()) return "0";
        return s.substr(idx);
    }

    int numDifferentIntegers(string word) {
        unordered_set<string> st;
        string s = "";
        for(char c:word){
            if(c >= '0' && c <= '9') s.push_back(c);
            else if(!s.empty()){
                string x = leadingZeros(s);
                if(x != "") st.insert(x);
                s.clear();
            }
        }
        if(!s.empty()){
            string x = leadingZeros(s);
            if(x != "") st.insert(x);
            s.clear(); 
        } 
        return st.size();
    }
};