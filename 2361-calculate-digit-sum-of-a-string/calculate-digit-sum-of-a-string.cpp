class Solution {
public:
    string digitSum(string s, int k) {
        string S = s;
        while(S.length() > k){
            string x = "" , ans = "";
            for(char c:S){
                if(x.length() != k) x.push_back(c);
                else {
                    int sum = 0;
                    for(char c:x) sum += c - '0';
                    ans += to_string(sum);
                    x = c;
                }
            }
            int sum = 0;
            for(char c:x) sum += c - '0';
            ans += to_string(sum);
            x.clear();
            S = ans;
        }
        return S;
    }
};