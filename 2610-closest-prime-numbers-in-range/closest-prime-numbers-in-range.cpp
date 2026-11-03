class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> is_prime(right+1 , true);
        is_prime[0] = is_prime[1] = false;
        for(int i=2 ; i*i<=right ; i++){
            if(is_prime[i]){
                for(int j=i*i ; j<=right ; j+=i) is_prime[j] = false;
            }
        }
        vector<int> primes;
        for(int i=left ; i<=right ; i++) {
            if(is_prime[i]) primes.push_back(i);
        }
        vector<int> ans = {-1 , -1};
        int mini = INT_MAX;
        for(int i=1 ; i<primes.size() ; i++){
            int diff = primes[i] - primes[i-1];
            if(diff < mini) mini = diff , ans = {primes[i-1] , primes[i]};
        }
        return ans;
    }
};