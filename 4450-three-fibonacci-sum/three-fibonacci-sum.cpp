class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a = 0 , b = 1 , check = 1;
        while(check){
            int sum = a + b;
            int c = a + b;
            sum += c;
            a = b , b = c;
            if(sum <= n){
                if(sum == n) return true;
            } else check = 0;
        }
        return false;
    }
};