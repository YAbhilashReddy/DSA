class Solution {
public:
    int countValidWords(string sentence) {
        stringstream ss(sentence);
        vector<string> words;
        string word;
        while(ss >> word) words.push_back(word);
        int c = 0;
        for(string w:words){
            int n = w.length();
            if(w[0] == '-' || w[n-1] == '-') continue;
            else {
                bool r = true;
                int hyphens = 0 , punctuation = 0;
                for(int i=0 ; i<n ; i++){
                    char ch = w[i];
                    if(ch == '-'){
                        hyphens++;
                        bool check = w[i-1] < 'a' || w[i-1] > 'z' || w[i+1] < 'a' || w[i+1] > 'z';
                        if(i == 0 || i == n-1 || check) r = false;
                    }
                    if(ch == '!' || ch == '.' || ch == ','){
                        punctuation++;
                        if(i != n-1) r = false;
                    }
                    if(!((ch >= 'a' && ch <= 'z') || ch == '-' || ch == '!' || ch == '.' || ch == ',')) {
                        r = false;
                    }
                }
                if(hyphens > 1 || punctuation > 1) r = false;
                c += r;
            }
        }
        return c;
    }
};