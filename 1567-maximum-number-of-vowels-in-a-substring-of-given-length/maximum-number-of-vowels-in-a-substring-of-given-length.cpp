class Solution {
public:
    bool checkVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int maxi = INT_MIN , count = 0;
        for(int i=0 ; i<k ; i++) count += checkVowel(s[i]);
        maxi = max(maxi , count) ;
        for(int i=k ; i<s.length() ; i++){
            if(checkVowel(s[i-k])) count--;
            if(checkVowel(s[i])) count++;
            maxi = max(maxi , count);
        }
        return maxi;




        // int maxi = INT_MIN , count = 0;
        // for(int i=0 ; i<k ; i++){
        //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
        // }
        // maxi = max(maxi , count);
        // for(int i=k ; i<s.length() ; i++){
        //     if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u') count--;
        //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
        //     maxi = max(maxi , count);
        // }
        // return maxi;


        // string vowels = "aeiou";
        // int maxi = INT_MIN , count = 0;
        // for(int i=0 ; i<k ; i++){
        //     if(vowels.find(s[i]) != string::npos) count++;
        // }
        // maxi = max(maxi , count);
        // for(int i=k ; i<s.length() ; i++){
        //     if(vowels.find(s[i-k]) != string::npos) count--;
        //     if(vowels.find(s[i]) != string::npos) count++;
        //     maxi = max(maxi , count);
        // }
        // return maxi;
    }
};