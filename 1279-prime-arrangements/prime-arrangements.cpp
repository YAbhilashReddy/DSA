class Solution {
public:
    int numPrimeArrangements(int n) {
        const long long MOD = 1e9 + 7;
        vector<int> is_prime(n+1 , true);
        is_prime[0] = is_prime[1] = false;
        for(int i = 2 ; i * i <= n ; i++){
            if(is_prime[i]){
                for(int j = i * i ; j <= n ; j += i) is_prime[j] = false;
            }
        }
        int c = 0;
        for(int i:is_prime) c += i;

        long long ans = 1;
        for(int i=1 ; i<=c ; i++) ans = (ans * i) % MOD;
        for(int i=1 ; i<=n-c ; i++) ans = (ans * i) % MOD;
        return ans;
    }
};