//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int n){
      //Code here.
      long long int s=0;
      //cout<<Arr[0]<<" ";
      for(int i=1;i<n;i++){
          Arr[i]+=Arr[i-1];
          //cout<<Arr[i]<<" ";
          s+=abs(Arr[i-1]);
      }
      //cout<<endl;
      return s;
  }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends