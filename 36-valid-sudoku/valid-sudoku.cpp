class Solution {
public:
    bool check(int R , int C , vector<vector<char>>& chess){
        unordered_set<char> st;
        int count = 0;
        for(int i=R ; i<R+3 ; i++){
            for(int j=C ; j<C+3 ; j++){
                char x = chess[i][j];
                if(x >= '1' && x <= '9') count++ , st.insert(x);
            }
        }
        return st.size() == count;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0 ; i<9 ; i++){
            unordered_set<char> row , col;
            int rcount = 0 , ccount = 0;
            for(int j=0 ; j<9 ; j++){
                char r = board[i][j] , c = board[j][i];
                if(r >= '1' && r <= '9') rcount++ , row.insert(r);
                if(c >= '1' && c <= '9') ccount++ , col.insert(c);
            }
            if(row.size() != rcount || col.size() != ccount) return false; 
        }
        for(int startRow = 0 ; startRow < 9 ; startRow += 3){
            for(int startCol = 0 ; startCol < 9 ; startCol += 3){
                if(!check(startRow , startCol , board)) return false;
            }
        }
        return true;
    }
};