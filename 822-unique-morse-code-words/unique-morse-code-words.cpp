class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string> freq;
        for(int i='a' ; i<='z' ; i++) freq[i] = morse[i-'a'];
        unordered_set<string> st;
        for(string word:words){
            string s = "";
            for(char c:word) s += freq[c];
            st.insert(s);
        }
        return st.size();
    }
};