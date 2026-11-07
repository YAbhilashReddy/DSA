class Solution {
public:
    bool hasSameDigits(string s) {
        string S = s;
        while(S.length() != 2){
            string temp = "";
            for(int i = 1 ; i < S.length() ; i++){
                int x = S[i - 1] - '0' , y = S[i] - '0';
                int r = (x + y) % 10;
                char c = r + '0';
                temp.push_back(c);
            }
            S = temp;
        }
        return S[0] == S[1];
    }
};