//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    queue<char>q;
	        vector<int>v(26,0);
		    string ans="";
		    for(char i:A){
		        v[i-'a']+=1;
		        q.push(i);
		        while(!q.empty()){
		            int t=q.front();
		            if(v[t-'a']==1){
		                ans+=t;
		                break;
		            }
		            else{
		              q.pop();  
		            }
		        }
		        if(q.empty()) ans+="#";
		        
		    }
		 return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends