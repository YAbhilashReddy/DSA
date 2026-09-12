class Solution {
public:
    int summation(string &s){
        int total = 0 ;
        for(char c:s) total = total * 10 + (c - 'a');
        return total;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return summation(firstWord) + summation(secondWord) == summation(targetWord);
    }
};