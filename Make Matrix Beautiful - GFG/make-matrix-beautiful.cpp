//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int m=0,cnt=0;
        for(int i=0;i<matrix.size();i++){
            int s=0;
            for(int j=0;j<matrix[0].size();j++){
                s+=matrix[i][j];
            }
            
            m=max(m,s);
        }
        for(int i=0;i<matrix[0].size();i++){
            int s=0;
            for(int j=0;j<matrix.size();j++){
                s+=matrix[j][i];
            }
            
            m=max(m,s);
        }
        
        
        for(int i=0;i<matrix[0].size();i++){
            int s=0;
            for(int j=0;j<matrix.size();j++){
                s+=matrix[j][i];
            }
            matrix[0][i]+=(m-s);
            cnt+=(m-s);
            
        }
        for(int i=0;i<matrix.size();i++){
            int s=0;
            for(int j=0;j<matrix[0].size();j++){
                s+=matrix[i][j];
            }
            matrix[0][i]+=(m-s);
            cnt+=(m-s);
        }
        
        return cnt;
    } 
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends