//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the minimum inverting factor 
int findMinimumInvertingFactor(int arr[], int N);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << findMinimumInvertingFactor(arr, n);
        
        cout << endl;
        
    }

}


// } Driver Code Ends

int rev(int n){
    int s=0;
    while(n){
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
int findMinimumInvertingFactor(int arr[], int N) 
{ 
    // Complete the function 
    for(int i=0;i<N;i++){
        arr[i]=rev(arr[i]);
    }
    sort(arr,arr+N);
    int m=1e9;
    for(int i=0;i<N-1;i++){
        m=min(m,arr[i+1]-arr[i]);
    }
    return m;
} 
