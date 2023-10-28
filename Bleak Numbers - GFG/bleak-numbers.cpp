//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int cnt(int n){
        int c=0;
        while(n){
            if((n&1)==1) c+=1;
            n=n>>1;
        }
        return c;
    }
    
	int is_bleak(int n)
	{
	    // Code here.
	    if(n==0) return 0;
	    
	    int i=n-1;
	    int k=sqrt(i);
	    while(k--){
	      if(i+cnt(i)==n) return 0;
	      i-=1;
	    }
	    
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends