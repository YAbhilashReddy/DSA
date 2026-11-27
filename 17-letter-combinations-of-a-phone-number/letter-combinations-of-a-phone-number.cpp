class Solution {
public:

    vector<string> one(string a) {
        vector<string> ans;
        for(char c : a) {
            string s = "";
            s.push_back(c);
            ans.push_back(s);
        }
        return ans;
    }

    vector<string> two(string a , string b){
        vector<string> ans;
        for(char i : a) {
            for(char j : b) {
                string s = "";
                s.push_back(i) , s.push_back(j);
                ans.push_back(s);
            }
        }
        return ans;
    }

    vector<string> three(string a , string b , string c) {
        vector<string> ans;
        for(char i : a) {
            for(char j : b) {
                for(char k : c) {
                    string s = "";
                    s.push_back(i) , s.push_back(j) , s.push_back(k);
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }

    vector<string> four(string a , string b , string c , string d) {
        vector<string> ans;
        for(char i : a) {
            for(char j : b) {
                for(char k : c) {
                    for(char l : d) {
                        string s = "";
                        s.push_back(i) , s.push_back(j) , s.push_back(k) , s.push_back(l);
                        ans.push_back(s);
                    }
                }
            }
        }
        return ans;
    }

    vector<string> letterCombinations(string digits) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        unordered_map<char , string> telephone;
        int x = 0;
        for(int i = 2 ; i <= 9 ; i++) {
            string s = "";
            if(i == 7 || i == 9) s = alpha.substr(x , 4) , x += 4;
            else s = alpha.substr(x,3) , x += 3;
            char ch = i + '0';
            telephone[ch] = s;
        }
        int n = digits.size();
        if(n == 1) return one(telephone[digits[0]]);
        else if(n == 2) return two(telephone[digits[0]] , telephone[digits[1]]);
        else if(n == 3) return three(telephone[digits[0]] , telephone[digits[1]] , telephone[digits[2]]);
        else return four(telephone[digits[0]] , telephone[digits[1]] , telephone[digits[2]] , telephone[digits[3]]);
        return {};
    }
};