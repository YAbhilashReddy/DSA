class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int multiplcation = 1;
        int N = n;
        while(N != 0){
            int digit = N % 10;
            sum += digit;
            multiplcation *= digit;
            N /= 10;
        }
        if(n % (sum + multiplcation) == 0) return true;
        return false;
    }
};