//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  
  public:
  
    void fun(int i,vector<int>arr,int n,vector<int>&ans,vector<int>chk,int s){
        
        if(i==n){ ans.push_back(s); return; }
        
        if(chk[i]!=0) return;
        
        fun(i+1,arr,n,ans,chk,s+arr[i]);
        fun(i+1,arr,n,ans,chk,s);
        
        return;
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        vector<int>chk(N,0);
        fun(0,arr,N,ans,chk,0);
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
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends