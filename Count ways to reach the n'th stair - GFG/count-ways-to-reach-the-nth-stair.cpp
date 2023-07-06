//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int m=1000000007;
    
    long long   fun(int n,int i, vector<long long >&v){
        if(i==n){
            return 1;
        }
        if(i>n) return 0;
        
        
        if(v[i]!=-1) return v[i];
        
        int l=0,r=0;
        if(i+1<=n)  l=fun(n,i+1,v);
        
        if(i+2<=n) r=fun(n,i+2,v);
        
        return v[i]=(l%m+r%m)%m;
    }
    int countWays(int n)
    {
        // your code here
        
        vector<long long >v(n,-1);
        
         return fun(n,0,v);
       
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends