class NumMatrix {
private:
    vector<vector<int>> prefix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int R = matrix.size();
        if (R == 0) return;
        int C = matrix[0].size();
        
        // Create a prefix matrix with an extra row and column padded with 0s
        // This avoids handling out-of-bounds edge cases for row-1 or col-1
        prefix.assign(R + 1, vector<int>(C + 1, 0));
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                prefix[i + 1][j + 1] = matrix[i][j] 
                                     + prefix[i][j + 1] 
                                     + prefix[i + 1][j] 
                                     - prefix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // Adjust indices by +1 because the prefix matrix is padded
        return prefix[row2 + 1][col2 + 1] 
             - prefix[row1][col2 + 1] 
             - prefix[row2 + 1][col1] 
             + prefix[row1][col1];
    }
};
