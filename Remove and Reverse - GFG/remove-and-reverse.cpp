//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code hre
        map<char,int>m;
        for(auto i : S){
            m[i]++;
        }
        int n=S.size();
        int i=0,j=n-1,d=0,k=0;
       while(i<j){
           if(d==0){
               k=i;
               i++;
               
           }
           else{
               k=j;
               j--;
               
           }
       
           if(m[S[k]]>1){
            m[S[k]]--;
            S[k]='@';
            if(d==0) d=1;
            else d=0;
           } 
           
        }
        string ans="";
        for(auto i : S){
            if(i!='@') ans+=i;
        }
        if(d==0) return ans;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends