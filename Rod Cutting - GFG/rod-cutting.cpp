//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
    int fun(int i,int p[],int n,int t,int s,vector<int>&dp){
        
        if(t==0) return 0;
        if(t<0 || i>=n) return 0;
        
    
        if(dp[t-1]!=-1) return dp[t-1];
        
        int tk=0;
        for(int j=0;j<n;j++){
        if(t>=j+1) tk=max(tk,fun(j,p,n,t-j-1,s,dp)+p[j]); 
        //int nt=fun(i+1,p,n,t,s);
        
        }
        return dp[t-1]=tk;
        
    }
    int cutRod(int p[], int n) {
        //code here
        
        vector<int>dp(n,-1);
        return fun(0,p,n,n,0,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends