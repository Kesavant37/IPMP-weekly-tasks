class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int low=0,res;
           int n=matrix.size();
           int high=n-1,mid;
           while(low<=high){
               mid=(low+high)/2;
               if(matrix[mid][0]==target)
                  return 1;
               else if(matrix[mid][0]<target)
                 low=mid+1;
                else 
                  high=mid-1;
           }
           if(high==-1) res=low;
            else res=high;
             
           n=matrix[res].size();
           low=0;
           high=n-1;
           while(low<=high){
               mid=(low+high)/2;
               if(matrix[res][mid]==target)
                  return 1;
               else if(matrix[res][mid]<target)
                 low=mid+1;
                else 
                  high=mid-1;
           }
           return 0;

        
    }
};
