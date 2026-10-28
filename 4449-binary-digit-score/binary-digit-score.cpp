class Solution {
public:
    int calculateScore(int a, int b) {
        int A = __builtin_popcount(a) , B = __builtin_popcount(b);
        return (A >= B ? A * B : B / A);
    }
};