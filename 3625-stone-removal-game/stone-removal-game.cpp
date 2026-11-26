class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        else {
            int x = 10 , c = 0;
            while(n) {
                if(n >= x) n -= x , c++ , x--;
                else {
                    if(c % 2) return true;
                    else return false;
                }
            }
            if(c % 2) return true;
        }
        return false;
    }
};