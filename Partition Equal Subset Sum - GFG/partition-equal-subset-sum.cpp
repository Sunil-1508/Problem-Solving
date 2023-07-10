//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int fun(int i,int n,int arr[],int s,int t,vector<vector<int>>&dp){
        if(i==n){
            if(s==t-s) return 1;
            return 0;
        }
        
        if(dp[i][s]!=-1) return dp[i][s];
        int l=fun(i+1,n,arr,s+arr[i],t,dp);
        int r=fun(i+1,n,arr,s,t,dp);
        
        return dp[i][s]=l|r;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        
        int t=accumulate(arr,arr+N,0);
        vector<vector<int>>dp(N+1,vector<int>(t,-1));
        return fun(0,N,arr,0,t,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends