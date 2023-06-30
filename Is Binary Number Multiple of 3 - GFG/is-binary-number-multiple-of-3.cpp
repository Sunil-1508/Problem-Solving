//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int e=0,o=0;
	    int n=s.size();
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            if(s[i]=='1'){
	                e++;
	            }
	        }
	        else{
	            if(s[i]=='1'){
	                o++;
	            }
	        }
	    }
	    if(abs(e-o)%3==0) return 1;
	    return 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends