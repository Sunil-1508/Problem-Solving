//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int m=1000000007;
    long long int fac(long long int n,vector<long long int> &v){
        if(n==0 or n==1) return n;
        if(v[n]==-1) v[n]=(fac(n-1,v)%m+fac(n-2,v)%m)%m;
        return v[n];
    }
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int>v(n+1,-1);
        long long ans=fac(n,v);
        return ans;
    }
    



/* 
1 2 3 4 5 6 7 8  9 
0 1 1 2 3 5 8 13 21 ...*/
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends