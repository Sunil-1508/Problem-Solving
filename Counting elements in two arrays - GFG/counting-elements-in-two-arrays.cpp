//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    sort(arr2,arr2+n);
    int max=arr2[n-1];
    // auto x=upper_bound(arr2,arr2+n,arr1[0]);
    // cout<<arr2[*x]<<"()"<<*x<<arr2[2]<<" "<<arr1[0]<<" ";
    
    vector<int>v;
    
    for(int i=0;i<m;i++){
        if(arr1[i]>=max){
            v.push_back(n);
        }
        else{
            auto x=upper_bound(arr2,arr2+n,arr1[i])-arr2;
            //cout<<arr2[*x];
            v.push_back(x);
        }
        
    }
    return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends