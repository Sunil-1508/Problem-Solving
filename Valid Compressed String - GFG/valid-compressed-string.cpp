//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int n=T.size();
        int m=S.size();
        int j=0;
        string sum="";
        int f=0;
        for(int i=0;i<n;i++){
            if(isdigit(T[i])){
                string s(1, T[i]);
                
                if(isdigit(T[i+1])){
                     sum+=T[i];
                     f=1;
                }
                else{
                sum+=T[i];
                
                j+=stoi(sum);//cout<<sum<<" ";
                if(i==n-1 and j==m-1) return 1;
                f=0;
                if(j>m) return 0;
                }
            }
            else{
                if(T[i]!=S[j]) return 0;
                else { j+=1;}
                sum="";
            }
        }
        return 1;
    }
//     abcdfeghijklmnopqrst
// 1bcd12qr2
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends