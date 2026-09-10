class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr(10,0);
        while(num) arr[num % 10]++ , num /= 10;
        vector<int> four(4,0);
        int i=0;
        for(int j=0 ; j<=9 ; j++){
            while(arr[j]--) four[i++] = j;
        }
        int a = four[0] * 10 + four[2] , b = four[1] * 10 + four[3];
        return a + b;

        // string s = to_string(num);
        // sort(s.begin() , s.end());
        // int a = (s[0] - '0') * 10  + (s[2] - '0') , b = (s[1] - '0') * 10 + (s[3] - '0');
        // return a + b;
    }
};