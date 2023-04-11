//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        // Your code here
        stack<char>st;
        string ans="";
        map<char,int>p;
       
        p['^']=3;
        p['*']=2;
        p['/']=2;
        p['-']=1;
        p['+']=1;
        for(auto it: s){
            if(it=='+' or it=='-' or it=='^' or it=='*' or it=='/' or it=='('){
                
                    while(!st.empty() and it!='(' and p[it]<=p[st.top()]) {
                        ans+=st.top();
                        if(!st.empty()) st.pop();
                    }
                    
                    st.push(it);
                
            }
            else if(it==')'){
                   while(st.top()!='('){
                       
                       ans+=st.top();
                       st.pop();
                   } 
                   st.pop();
            }
            else{
                    ans+=it;
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
              } 
        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends