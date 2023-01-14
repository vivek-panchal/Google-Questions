class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row, col;
        int n=grid[0].size();
        for(int i=0;i<n;i++){
            int rowMin=-1;
            int colMin=-1;
            for(int j=0;j<n;j++){
                if(grid[i][j]>rowMin){
                    rowMin=grid[i][j];
                }
                if(grid[j][i]>colMin){
                    colMin=grid[j][i];
                }
            }
            row.push_back(rowMin);
            col.push_back(colMin);
        }

        int ans=0;
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
                ans+=min(row[i],col[j])-grid[i][j];
            }
        }
        return ans;
    }
};
