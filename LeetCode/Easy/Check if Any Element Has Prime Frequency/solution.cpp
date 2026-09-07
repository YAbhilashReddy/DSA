class Solution {
public:
    bool checkPrime(int n){
        if(n < 2) return false;
        int c = 0;
        for(int i=2 ; i*i<=n ; i++){
            if(n % i == 0) {
                c++;
                if(i != n/i) c++;
            }
        }
        return !c;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> arr(101);
        for(int i:nums) arr[i]++;
        for(int i:arr){
            if(checkPrime(i)) return true;
        }
        return false;
    }
};