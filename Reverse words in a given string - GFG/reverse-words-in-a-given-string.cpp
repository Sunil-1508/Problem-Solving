//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>st;
        int n=S.size();
        string t="";
        for(int i=0;i<=n;i++){
            if(S[i]!='.' and i!=n){
                t+=S[i];
            }
            else{
                st.push(t);
                t="";
            }
        }
        int m=st.size();
        string ans="";
        int i=0;
        while(i<m-1){
            ans+=st.top()+".";
            st.pop();
            i++;
        }
        ans+=st.top();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends