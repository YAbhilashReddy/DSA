class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size() , cols = matrix[0].size();
        for(int i=0 ; i<rows ; i++){
            vector<int> arr;
            for(int j=0 ; j<cols ; j++){
                arr.push_back(matrix[i][j]);
                if(i) arr[j] += prefix[i-1][j];
                if(j) arr[j] += arr[j-1];
                if(i && j) arr[j] -= prefix[i-1][j-1];
            }
            prefix.push_back(arr);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = prefix[row2][col2];
        if(row1) sum -= prefix[row1-1][col2];
        if(col1) sum -= prefix[row2][col1-1];
        if(row1 && col1) sum += prefix[row1-1][col1-1];
        return sum; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */