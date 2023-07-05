//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > a, int n, int m) 
    {
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
        
        
        return v;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends