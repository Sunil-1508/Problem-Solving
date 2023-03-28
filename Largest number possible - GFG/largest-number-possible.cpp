//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
    if(N==1 and S==0) return "0";
    if(S==0 or N==0) return "-1";
       string s="";
       while(S>0){
           if(S<=9) { s+=to_string(S); S=0; }
           else{
               s+="9"; S-=9;
           }
       }
       if(s.size()>N) return "-1";
       if(s.size()<N){
           int t=N-s.size();
           while(t--){
               s+='0';
           }
       }
       return s;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends