//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int l, int f[]) {
        // Code here
        vector<int>v(l+1,0);
        
        for(int i=0;i<N;i++){
            int k=f[i];
            if(k>l) continue;
            if(v[k]==0){
            while(k<=l){
                v[k]=1;
                k+=f[i];
            }}
        }
        int c=0;
        for(auto i:v){
            if(i==0) c++;
            //cout<<i<<" ";
        }
        return c-1;
        
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends