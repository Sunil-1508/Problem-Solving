//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int n,vector<int> &A,vector<int> &B){
        stack<int>s;
        int i=1;
        int j=0;
        int c=0;
        s.push(A[0]);
        while(i<=n){
            
            
            
            if(!s.empty() and s.top()==B[j]){
                //cout<<s.top()<<"pop"<<endl;
                s.pop();
                j++;
                c++;
            }
            else{
                //cout<<A[i]<<"push"<<endl;
                  if(i<n) s.push(A[i]);
                  i++;
            }
            
          
            
            
            
        }
        
        //cout<<c<<" ";
        if(c==n) return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends