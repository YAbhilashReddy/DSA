class Solution {
public:
    bool sumGame(string num) {
        int n = num.length() , fm = 0 , sm = 0 , FH = 0 , SH = 0;
        for(int i = 0 ; i < n ; i++){
            if(i < n/2) {
                if(num[i] != '?') FH += num[i] - '0';
                else fm++;
            } else {
                if(num[i] != '?') SH += num[i] - '0';
                else sm++;
            }
        }
        return (fm + sm) % 2 != 0 || (FH - SH) * 2 != (sm - fm) * 9;
    }
};