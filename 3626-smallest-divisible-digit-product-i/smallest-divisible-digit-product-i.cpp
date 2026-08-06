class Solution {
public:
    int smallestNumber(int n, int t) {
        if(t > n) return t;
        for(int i=n ; i<=2*n ; i++){
            int total = 1;
            int N = i;
            while(N != 0){
                total *= N % 10;
                N /= 10;
            }
            if(total % t == 0) return i;
        }
        return 0;
    }
};