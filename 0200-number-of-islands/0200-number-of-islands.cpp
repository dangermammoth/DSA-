class Solution {
public:
    int m,n;
    vector<vector<int>> visited;

    void dfs(int i,int j,vector<vector<char>>& grid){

        if(i<0 || i>=m || j<0 || j>=n) return ;
        if(visited[i][j]==1 || grid[i][j]=='0') return ;

        visited[i][j]=1;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }


    int numIslands(vector<vector<char>>& grid) {
         m=grid.size();
         n=grid[0].size();
        visited.assign(m, vector<int>(n, 0));

            int cnt=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]=='1' && visited[i][j]==0){
                        cnt++;
                        dfs(i,j,grid);
                    }
                }
            }
            return cnt;
    }
};