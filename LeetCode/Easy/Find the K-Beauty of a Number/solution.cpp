class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c = 0;
        string s = to_string(num);
        string S = s.substr(0,k);
        int n = stoi(S);
        c += (num % n == 0);
        for(int i=k ; i<s.length() ; i++){
            S.push_back(s[i]);
            S.erase(0,1);
            n = stoi(S);
            if(n == 0) continue;
            else c += (num % n == 0);
        }
        return c;
    }
};