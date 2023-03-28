//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        if(S<=9 and D==1) return to_string(S);
        int k=D-1;
        string s="1";
        while(k){
            s+="0";
            k--;
        }
        int n=stoi(s);
        int i=1;
        S-=1;
        if(S<=9 and D>1) {  n+=S; S=0;}
        else{
            S-=9; n+=9;
        }
        //cout<<S<<" ";
        int t;
        while(S>0){
            // if(S<=9) { n+=10*S; S=0;} 
            // else { 
                if(S<=9) t=S;
                else t=9; 
                n+=t*(pow(10,i)); i++; S-=t; 
        }
        //cout<<n;
        s=to_string(n);
        if(s.size()>D) return "-1";
        return s;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends