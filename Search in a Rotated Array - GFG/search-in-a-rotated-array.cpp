//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int bsearch(int l,int r,int key,int A[]){
        int m;
        
        while(l<=r){
            
        m=(l+r)/2;
        if(A[m]==key) return m;
        else if(A[m]>key) r=m-1;
        else l=m+1;
        
        }
        
        return -1;
        
    }
    int search(int A[], int l1, int r2, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        int r1=r2,l2=l1;
        for(int i=l1;i<r2;i++){
            if(A[i]>A[i+1]){
                r1=i;
                l2=i+1;
            }
        }
        if(A[l1]<=key and key<=A[r1]) return bsearch(l1,r1,key,A);
        else if(A[l2]<=key and key<=A[r2]) return bsearch(l2,r2,key,A);
        return -1;
       

    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends