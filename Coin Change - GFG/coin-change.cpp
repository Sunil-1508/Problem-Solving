//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int ans=0;
    // int m=1000000007;
    /*long long int dp(int i,int t,int n,int c[],vector<vector<long long int>>a){
        if(i>=n or t==0){
            if(t==0){
                return 1;
            }
            
            return 0;
        }
        if(a[i][t]!=-1) return a[i][t];
        
        long long int take=0,Ntake=0;
        
        if(t>=c[i]) { take = dp(i,t-c[i],n,c,a)%m; }
        
        Ntake=dp(i+1,t,n,c,a)%m;
        
        a[i][t]=take+Ntake;
        
        return a[i][t];
        
    }
    long long int count(int c[], int N, int sum) {

        vector<vector<long long int>>a(N+1,vector<long long int>(sum+1,-1));
        int ds=0;
        return dp(0,sum,N,c,a);
        
    }*/
    
    
    long long int dp(int i, int t, int n, int c[], vector<vector<long long >>& a) {
    
    if (i >= n || t == 0) {
        if (t == 0) {
            return 1;
        }
        return 0;
    }
    if (a[i][t] != -1) {
        return a[i][t];
    }

    long long take = 0, Ntake = 0;

    if (t >= c[i]) {
        take = dp(i, t - c[i], n, c, a) ;
    }

    Ntake = dp(i + 1, t, n, c, a) ;

    a[i][t] = (take + Ntake) ;

    return a[i][t];
}

long long int count(int c[], int N, int sum) {
    vector<vector<long long >> a(N, vector<long long >(sum + 1, -1));
    return dp(0, sum, N, c, a);
}

    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends