class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> vec(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(obstacleGrid[i][0] == 1)
               break;
            vec[i][0]=1;
        }
        for(int i=0;i<n;i++){
            if(obstacleGrid[0][i] == 1)
               break;
            vec[0][i]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j] == 1){
                   vec[i][j]=0;
                   continue;
                }
                vec[i][j] = vec[i-1][j]+vec[i][j-1];
            }
        }
        return vec[m-1][n-1];
    }
};