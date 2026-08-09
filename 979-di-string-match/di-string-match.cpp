class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int i=0 , j=n;
        vector<int> arr(n+1);
        for(int x=0 ; x<n ; x++){
            if(s[x] == 'I') arr[x] = i++;
            else arr[x] = j--;
        }
        arr[n] = j;
        return arr;
    }
};