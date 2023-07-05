//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int n, int m, vector<vector<int>>&a)  {
        // code here
        
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
        
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends