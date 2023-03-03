//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int GCD(long long int A, long long int B){
        if(B==0) return A;
        return GCD(B,A%B);
    }
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
        int i=1;
        int ans=GCD(L,B);
        return {L*B/(ans*ans),ans};
        //361 605
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends