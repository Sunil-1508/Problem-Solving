//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        vector<int>v;
        int l=0,r=m-1,t=0,b=n-1;
        while(l<=r and t<=b){
            for(int i=l;i<=r;i++){
                v.push_back(a[t][i]);
               
            }
             t++;
            for(int i=t;i<=b;i++){
                v.push_back(a[i][r]);
               
            }
             r--;
            for(int i=r;i>=l;i--){
                v.push_back(a[b][i]);
                
            }
            b--;
            for(int i=b;i>=t;i--){
                v.push_back(a[i][l]);
               
            }
             l++;
        }
        
        // for(int i=0;i<(n*m);i++){
        //     cout<<v[i]<<" ";
        // }
        
        return v[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends