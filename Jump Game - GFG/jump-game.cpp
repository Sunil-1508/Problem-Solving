//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        if((A[0]==0 and N==1) or (N==1)) return 1;
        if(A[0]==0) return 0;
        int i=0,m=A[0];
        for(int i=1;i<N;i++){
            
            m=max(m,i+A[i]);
            if(m>=N-1) return 1;
            if(i>=m) return 0;
            
            
        }
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends