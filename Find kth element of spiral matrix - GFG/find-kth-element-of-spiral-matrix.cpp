//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int p)
    {
 		// Your code goes here.
 		vector<int>v;
        int l=0,r=m-1,t=0,b=n-1;
        int c=0;
        int k=n*m;
        while(l<=r and t<=b){
            if(c>=k){ break; }
            for(int i=l;i<=r;i++){
                v.push_back(a[t][i]);
                c++;
               
            }
             t++;
            if(c>=k){ break; }
            for(int i=t;i<=b;i++){
                v.push_back(a[i][r]);
                c++;
               
            }
             r--;
            if(c>=k){ break; }
            for(int i=r;i>=l;i--){
                v.push_back(a[b][i]);
                c++;
                
            }
            b--;
            if(c>=k){ break; }
            for(int i=b;i>=t;i--){
                v.push_back(a[i][l]);
                c++;
               
            }
             l++;
        }
        
        // for(int i=0;i<(n*m);i++){
        //     cout<<v[i]<<" ";
        // }
        
        
        return v[p-1];
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
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends