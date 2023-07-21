//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dp(V,100000000);
       
        dp[S]=0;
        
        int s=edges.size();
        if(s==0) return dp;
        
        for(int i=0;i<V-1;i++){
            for(int k=0;k<s;k++){
            int u=edges[k][0];
            int v=edges[k][1];
            int d=edges[k][2];
                if(dp[u]!=100000000 and (dp[u]+d)<dp[v]){
                    dp[v]=dp[u]+d;
                }
            }
        }
        
        for(int k=0;k<s;k++){
            int u=edges[k][0];
            int v=edges[k][1];
            int d=edges[k][2];
                if(dp[u]!=100000000 and (dp[u]+d)<dp[v]){
                    return {-1};
                }
        }
        
        
        return dp;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends