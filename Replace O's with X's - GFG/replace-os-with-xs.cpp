//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // void dfs(int i,int j,int n,int m,vector<vector<char>> mat,vector<vector<int>>&dmy){
    //     if(i<0 or j<0 or i>=n or j>=m or dmy[i][j]==1 or mat[i][j]=='X') return;
        
    //     dmy[i][j]=1;
        
    //     dfs(i-1,j,n,m,mat,dmy);
    //     dfs(i,j+1,n,m,mat,dmy);
    //     dfs(i+1,j,n,m,mat,dmy);
    //     dfs(i,j-1,n,m,mat,dmy);
        
    //     return;
    // }
    // vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    // {
    //     // code here
    //     vector<vector<int>>dmy(n,vector<int>(m,0));
        
        
    //     for(int i=0;i<n;i++){
            
    //         if(mat[i][0]=='O' and dmy[i][0]!=1) dfs(i,0,n,m,mat,dmy);
            
    //         if(mat[i][m-1]=='O' and dmy[i][m-1]!=1) dfs(i,m-1,n,m,mat,dmy);
          
    //     }
    //     for(int j=0;j<n;j++){
            
    //         if(mat[0][j]=='O' and dmy[0][j]!=1) dfs(0,j,n,m,mat,dmy);
            
    //         if(mat[n-1][j]=='O' and dmy[n-1][j]!=1) dfs(n-1,j,n,m,mat,dmy);
          
    //     }
        
        
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(mat[i][j]=='O' and dmy[i][j]==0) mat[i][j]='X';
    //         }
    //     }
        
    //     return mat;
        
        
    // }
    void dfs(int i, int j, int n, int m, vector<vector<char>>& mat, vector<vector<int>>& dmy) {
    if (i < 0 || j < 0 || i >= n || j >= m || dmy[i][j] == 1 || mat[i][j] == 'X') return;

    dmy[i][j] = 1;

    dfs(i - 1, j, n, m, mat, dmy);
    dfs(i, j + 1, n, m, mat, dmy);
    dfs(i + 1, j, n, m, mat, dmy);
    dfs(i, j - 1, n, m, mat, dmy);
}

vector<vector<char>> fill(int n, int m, vector<vector<char>>& mat) {
    vector<vector<int>> dmy(n, vector<int>(m, 0));

    // Traverse the borders and start DFS from 'O' cells on the borders
    for (int i = 0; i < n; i++) {
        if (mat[i][0] == 'O' && dmy[i][0] != 1) {
            dfs(i, 0, n, m, mat, dmy);
        }
        if (mat[i][m - 1] == 'O' && dmy[i][m - 1] != 1) {
            dfs(i, m - 1, n, m, mat, dmy);
        }
    }
    for (int j = 0; j < m; j++) {
        if (mat[0][j] == 'O' && dmy[0][j] != 1) {
            dfs(0, j, n, m, mat, dmy);
        }
        if (mat[n - 1][j] == 'O' && dmy[n - 1][j] != 1) {
            dfs(n - 1, j, n, m, mat, dmy);
        }
    }

    // Fill 'O' cells that were not visited by DFS with 'X'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 'O' && dmy[i][j] == 0) {
                mat[i][j] = 'X';
            }
        }
    }

    return mat;
}

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends