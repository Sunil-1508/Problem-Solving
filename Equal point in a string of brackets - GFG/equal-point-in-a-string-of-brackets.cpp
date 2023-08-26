//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int findIndex(string str) {
        // Your code goes here   
        int n=str.size();
        int s=0;
        int e=0;
        vector<int>f(n+2,0);
        vector<int>b(n+2,0);
        for(int i=0;i<n;i++){
            if(str[i]=='(') s++;
            if(str[n-i-1]==')') e++;
            f[i+1]=s;
            b[n-i]=e;
            
        }
        
        f[n+1]=f[n];
        b[0]=b[1];
        for(int i=1;i<n+1;i++){
            if(f[i]==b[i-1] or f[i]==b[i+1]) return i;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.findIndex(s)<<endl;
	}
}
// } Driver Code Ends