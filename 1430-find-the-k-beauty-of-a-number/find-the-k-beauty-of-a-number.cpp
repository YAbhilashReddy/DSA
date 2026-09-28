class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c = 0;
        string s = to_string(num);
        int n = 0 , pow = 1;
        for(int i=0 ; i<k ; i++) n = n * 10 + (s[i] - '0') , pow *= (!i ? 1 : 10);
        c += (n && num % n == 0);
        for(int i=k ; i<s.length() ; i++){
            n = (n % pow) * 10 + (s[i] - '0');
            c += (n && num % n == 0);
        }
        return c;



        // int c = 0;
        // string s = to_string(num);
        // string S = s.substr(0,k);
        // int n = stoi(S);
        // c += (num % n == 0);
        // for(int i=k ; i<s.length() ; i++){
        //     S.push_back(s[i]);
        //     S.erase(0,1);
        //     n = stoi(S);
        //     if(n == 0) continue;
        //     else c += (num % n == 0);
        // }
        // return c;
    }
};