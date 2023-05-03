//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
         int c=0,d=0;
         map<string,int>mp;
        for(auto e:arr){
            mp[e]++;    }
        for(auto e:mp){
            string s;
            for(int i=e.first.size()-1;i>=0;i--){
                 s+=e.first[i];
             }
             auto it=mp.find(s);
             if(it==mp.end()) c++;
             if(e.second!=mp[s]){
                 c++;
             }
             else{
                 if(s==e.first and e.second%2==1) {
                     d++;
                 }
             }
        }
        if(n==1 and c==1) return false;
        if(d>1) return false;
        if((c==1 or c==0 )) return true;
        else return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends