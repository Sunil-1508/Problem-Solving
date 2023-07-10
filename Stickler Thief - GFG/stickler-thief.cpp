//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    
    
    int fun(int i,int arr[],int n,int ans,vector<int>&dp){
        
        if(i>=n) return 0;
        
        if(dp[i]!=-1) return dp[i];
        int t=fun(i+2,arr,n,ans,dp)+arr[i];
        int nt=fun(i+1,arr,n,ans,dp);
        
        
        return dp[i]=max(t,nt);
        
    }
    int FindMaxSum(int arr[], int n)
    {
        vector<int>dp(n+2,-1);
        return fun(0,arr,n,0,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends