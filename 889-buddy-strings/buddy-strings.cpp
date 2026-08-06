class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;
        if(s == goal){ // This is speacial case ex:aba
            set<char> temp(s.begin() , s.end());
            return temp.size() < goal.length();
        }
        int i = 0 , j = s.length()-1;
        while(i < j && s[i] == goal[i]) i++;
        while(j >= 0 && s[j] == goal[j]) j--;
        if(i < j) swap(s[i] , s[j]);
        return s == goal;
    }
};