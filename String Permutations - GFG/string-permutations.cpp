//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    
    void fun(int i,int n,vector<int>v,string S,string t,vector<string>&ans){
        
        if(t.size()==n){
            ans.push_back(t);
        }
        for(int j=0;j<n;j++){
            if(v[j]==0){
                v[j]=1;
                fun(j+1,S.size(),v,S,t+S[j],ans);
                v[j]=0;
            }
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        
        vector<string>ans;
        for(int i=0;i<S.size();i++){
             vector<int>v(S.size(),0);
            string t;
            v[i]=1;
            fun(i,S.size(),v,S,t+S[i],ans);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends