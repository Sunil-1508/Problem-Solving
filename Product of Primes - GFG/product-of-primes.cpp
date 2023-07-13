//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int m=1e9+7;
    long long primeProduct(long long L, long long R){
        // code here
        long long p=1;
        int s=sqrt(R)+1;
        
        for(long long i=L;i<=R;i++){
            int f=1;
            if(i<=1) continue;
            for(int j=2;j<s;j++){
                
                if(i%j==0 and i!=j) { f=0; break; }
                
                if(i==j and i<s)  break;
                
            }
            if(f==1) p=(p%m*i%m)%m;
        }
        return p;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends