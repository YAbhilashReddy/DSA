class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int i=0 , j=n;
        vector<int> arr;
        for(int x=0 ; x<n ; x++){
            if(s[x] == 'I') arr.push_back(i++);
            else arr.push_back(j--);
        }
        arr.push_back(j);
        return arr;
    }
};