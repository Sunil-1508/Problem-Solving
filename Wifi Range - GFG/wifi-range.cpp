//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int n, string S, int X){
        // code here
       int f[n+1]={0};
       int i=0;
       while(i<n){
           if(S[i]=='1'){
               int l=max(i-X,0);
               int r=min(i+X,n-1);
               f[l]++;
               f[r+1]--;
           }
           i++;
       }
       i=1;
       if(f[0]==0) return false;
      
        while(i<n){
           
            f[i]+=f[i-1];
            if(f[i]==0) return false;
            i++;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends