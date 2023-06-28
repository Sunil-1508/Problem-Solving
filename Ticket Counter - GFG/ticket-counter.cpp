//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
        
        deque<int>dq;
        
        for(int i=0;i<n;i++){
            dq.push_back(i+1);
        }
        int t=1;
        int ans;
        while(dq.size()!=0){
            int j=k;
            if(t==1){
                while(j--){
                    if(!dq.empty()){
                    ans=dq.front();
                    //cout<<ans<<" ";
                    dq.pop_front();}
                }
                t=0;
            }
            else{
                while(j--){
                    if(!dq.empty()){
                    ans=dq.back();
                    //cout<<ans<<" ";
                    dq.pop_back();}
                }
                t=1;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends