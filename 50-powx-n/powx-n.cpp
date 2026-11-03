class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;
        bool neg = (p < 0);
        if(p < 0) p = -p;
        double ans = 1.0;
        while(p) {
            if(p % 2){
                ans *= x;
                p--;
            } else {
                x *= x;
                p /= 2;
            }
        }
        if(neg) ans = 1.0 / ans;
        return ans;
    }
};