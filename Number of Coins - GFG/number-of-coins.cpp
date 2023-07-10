//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int fun( int c[],int M,int V,vector<int>&dp){
	    
	    if(V==0) return 0;
	    
	     
	    if(dp[V]!=-1) return dp[V];
	    
	    int l=1e9;
	   
	    for(int j=0;j<M;j++){
	    if(V>=c[j]) l=min(l,fun(c,M,V-c[j],dp)+1);
	    }
	   
	    return dp[V]=l;
	    
	    
	    
	    
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    //sort(coins,coins+M);
	    vector<int>dp(V+1,-1);
	    int ans=fun(coins,M,V,dp);
	    if(ans==1e9) return -1;
	    return ans;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends