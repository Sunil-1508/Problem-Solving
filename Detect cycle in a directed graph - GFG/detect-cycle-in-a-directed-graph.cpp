//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int i, vector<int> adj[],vector<int> &vis,vector<int> &vis2){
        vis[i]=1;
        vis2[i]=1;
        
        for(auto it:adj[i]){
            if(!vis[it]){
                if(dfs(it,adj,vis,vis2)) return true;
            }
            else if(vis2[it]==1){
                return true;
            }
            
        }
        vis2[i]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>vis2(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,vis2)) return true;
            }
        }
        return false;
    }
// 6 5
// 5 3
// 3 1
// 1 2
// 2 4
// 4 0
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends