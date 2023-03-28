//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        
        int n=S.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int l=0;
            int u=0;
            
            if(S[i]-'a'>=0)l++;
            else u++;
            
            for(int j=i+1;j<n;j++){
            if(S[j]-'a'>=0)l++;
            else u++;
            if(l==u) ans++;
            
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends