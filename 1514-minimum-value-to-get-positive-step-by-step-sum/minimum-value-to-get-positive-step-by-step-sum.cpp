class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int m = 1;
        bool r = false;
        while(!r) {
            int n = m , check = 0;
            for(int i:nums) {
                n += i;
                if(n < 1) {check = 1 ; break;}
            }
            if(check) m++;
            else r = true;
        }
        return m;
    }
};