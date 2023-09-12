//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long c=1;
        
        if(N==1) return 0;
        
        for(long long i=2;i*i<=N;i++){
            if(N%i==0){
                c+=i;
                if(N/i!=i) c+=N/i;
            }
        }
        
        return (c==N)?1:0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends