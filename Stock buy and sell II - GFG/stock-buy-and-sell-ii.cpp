//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &p) {
        // code here
        int ans=0;
        int b=0, s=0;
        int i=0;
        while(i<n-1){
           b=p[i];
           
           int f1=0;
           while(p[i]>p[i+1] and i+1<n) {
               b=p[i+1];
               i++;
               f1=1;
           }
           if(f1==0) i++;
           
           
           s=p[i];
           
           
           int f2=0;
           while(p[i]<p[i+1] and i+1<n){
                s=p[i+1];
                i++;
                f2=1;
           }
           if(f2==0) i++;
           
          
           ans+=(s-b);
           
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends