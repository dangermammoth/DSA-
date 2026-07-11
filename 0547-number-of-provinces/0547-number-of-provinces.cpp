class Solution {
public:




  void dfs(int node,int n,vector<int>&visited,vector<vector<int>>& adj){
        visited[node]=1;
        for(int j=0;j<n;j++){
            if(adj[node][j]==1 && visited[j]==0){
                dfs(j,n,visited,adj);
            }
        }
      }


    int findCircleNum(vector<vector<int>>& adj) {
      
      
        int n=adj.size();
      vector<int>visited(n,0);
      int cnt=0;
    

    
      for(int i=0;i<n;i++){
        if(visited[i]==0){
            dfs(i,n,visited,adj);
            cnt++;
        }
      }
    return cnt;
    }
};