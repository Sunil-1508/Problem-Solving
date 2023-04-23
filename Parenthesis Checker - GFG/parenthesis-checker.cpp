//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
    
        for(auto it:x){
            if(it=='{' or it =='[' or it=='('){
                s.push(it);
            }
            else{
                if(s.empty()) return false;
                if( (it=='}' and s.top()=='{') or( it ==']' and s.top()=='[' ) or( it==')' and s.top()=='(')){
                    if(!s.empty()) s.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(s.empty())  return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends