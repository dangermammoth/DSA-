class Solution {
public:
    //dfs function
    void dfs(int node,vector<int>&visited, vector<vector<int>>&adj){
        visited[node]=1;

        for(int i=0;i<adj[node].size();i++){
           int child=adj[node][i];

           if(visited[child]==0){
            dfs(child,visited,adj);
           } 
        }
    }


    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
   

        // building of directed graph
        for(auto &it:invocations){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
        }

        vector<int>visited(n,0);
        dfs(k,visited,adj);



        for(auto &it:invocations){
            int u=it[0];
            int v=it[1];

            if(visited[u]==0 && visited[v]==1){
                vector<int>ans;
                for(int i=0;i<n;i++){
                    ans.push_back(i);
                }
                return ans;
            }
        }

          vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!visited[i])
                ans.push_back(i);
        }

        return ans;



    }
};