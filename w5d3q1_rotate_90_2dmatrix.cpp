void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        for(int i=0;i<matrix[0].size();i++){
            for(int j=i;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int k=0;k<n/2;k++){
        for(int i=0;i<matrix[0].size();i++){
            swap(matrix[i][k],matrix[i][n-k-1]);
        }
        }
        
    }
