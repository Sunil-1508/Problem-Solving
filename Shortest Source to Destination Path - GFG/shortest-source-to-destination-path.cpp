//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    
  public:
  
  
  
  
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        vector<vector<bool>>chk(N,vector<bool>(M,false));
         
        vector<vector<int>>dp(N,vector<int>(M,1e9));
        dp[0][0]=0;
        int ans=1e9;
        
       queue<pair<int,pair<int,int>>>q;
       q.push({0,{0,0}});
       
       
        while(!q.empty()){
            
            pair<int,pair<int,int>>t=q.front();
            q.pop();
            
            
            int w=t.first;
            
            int x=t.second.first;
            int y=t.second.second;
            
            
            if(x-1>=0 && A[x-1][y]==1  && w+1<dp[x-1][y] ){ dp[x-1][y]=w+1;  q.push({w+1,{x-1,y}}); } 
            if(y+1<M && A[x][y+1]==1   && w+1<dp[x][y+1] ){ dp[x][y+1]=w+1;  q.push({w+1,{x,y+1}}); } 
            if(x+1<N && A[x+1][y]==1   && w+1<dp[x+1][y] ){ dp[x+1][y]=w+1;  q.push({w+1,{x+1,y}}); } 
            if(y-1>=0 && A[x][y-1]==1  && w+1<dp[x][y-1] ){ dp[x][y-1]=w+1;  q.push({w+1,{x,y-1}}); } 
            
            
        }
        
        
        
        if(dp[X][Y]>=1e9) return -1;
        
        return dp[X][Y];
    
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends