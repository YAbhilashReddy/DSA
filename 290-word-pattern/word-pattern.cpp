class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> arr(26);
        unordered_map<string , char> freq;
        int i = 0;
        while(ss>>word){
            if(i == pattern.length()) return false;
            int n = pattern[i] - 'a';
            if(arr[n].empty() && freq.find(word) == freq.end()){
                arr[n] = word;
                freq[word] = pattern[i];
            } else if(arr[n] != word || freq[word] != pattern[i]) return false;
            i++;
        }
        return i == pattern.length();


        // stringstream ss(s);
        // vector<string> words;
        // string word;
        // while(ss>>word) words.push_back(word);
        // if(words.size() != pattern.length()) return false;
        // unordered_set<char> ch;
        // unordered_set<string> se;
        // for(int i=0 ; i<pattern.length() ; i++) ch.insert(pattern[i]) , se.insert(words[i]);
        // if(ch.size() != se.size()) return false;
        // vector<string> arr(26);
        // for(int i=0 ; i<pattern.length() ; i++){
        //     int n = pattern[i] - 'a';
        //     string S = words[i];
        //     if(arr[n].empty()) arr[n] = S;
        //     else if(arr[n] != S) return false;
        // }
        // return true;
    }
};