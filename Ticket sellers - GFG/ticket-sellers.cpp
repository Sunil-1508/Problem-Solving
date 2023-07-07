//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxAmount(int N, int K, int A[])
    {
        // code here
        priority_queue<int>pq;
        for(int i=0;i<N;i++){
            pq.push(A[i]);
        }
        int m=1000000007;
       
        int ans=0;
        while(K--){
            int t=pq.top();
            pq.pop();
            ans=(ans%m+t%m)%m;
            pq.push(t-1);
                
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.maxAmount(N, K, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends