class Solution {
public:
    int countDigits(int num) {
        int c = 0;
        int N = num;
        while(N != 0){
            int l = N % 10;
            if(num % l == 0){
                c++;
            }
            N/=10;
        }
        return c;
    }
};