//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int m=1e9+7;
    long long  way(int i,int n,long long sum,vector<long long>&v){
        // cout<<sum;
        
        long long c=0;
        if(sum>n) return 0;
        if(sum==n) {
            return 1;
        }
        
        if(v[sum]!=-1) return v[sum];
        
        for(int j=1;j<=3;j++){
             c=(c%m+way(j,n,sum+j,v)%m)%m;
        }
        
        return v[sum]=c;
    }
    long long countWays(int n)
    {
        
        // your code here
        long long k;
        vector<long long>v(n,-1);
        return way(0,n,0,v);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends