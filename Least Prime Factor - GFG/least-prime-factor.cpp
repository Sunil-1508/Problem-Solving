//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool prime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
        
    }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>v(n+1,0);
        vector<int>a;
        int t=2;
        while(t<=n){
            if(prime(t)) a.push_back(t);
            t++;
        }
        for(int i=0;i<=n;i++){
            if(i<=1) v[i]=i;
            else{
                int j=0;
                while(true){
                    if( i%a[j]==0){
                        v[i]=a[j];
                        break;
                    }
                    j++;
                }
            }
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends