class Solution {
public:
    string thousandSeparator(int n) {
        if(n < 1000) return to_string(n);
        else {
            string s = "";
            int c = 0;
            while(n){ 
                if(c < 3) c++ , s.push_back((n % 10) + '0') , n /= 10;
                else s.push_back('.') , c = 0;
            }
            reverse(s.begin() , s.end());
            return s;
        }
        return "";
    }
};