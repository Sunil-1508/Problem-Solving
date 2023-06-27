//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    /*You are required to complete this method*/
    static bool  cmp(val a,val b){
        if(a.second<b.second) return true;
        else if(a.first==b.first){
            if(a.first<b.first) return true;
        }
        return false;
    }
    int maxChainLen(struct val p[],int n){
        //Your code here
        
        sort(p,p+n,cmp);
        int m=0;
        //for(int i=0;i<n;i++){
            //cout<<p[i].first<<"-"<<p[i].second<<" ";
            int i=0;
            int c=1,j=i,l=i;
            while(j<n-1){
                if(p[l].second<p[j+1].first){  l=j+1; c++;}
                j++;
            }
            
            //m=max(c,m);
        //}
        return c;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends