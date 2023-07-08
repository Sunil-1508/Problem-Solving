//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        deque<char>dq;
        vector<int>v(26,0);
        int n=s.size();
        int ans=0,c=0;
        for(int i=0;i<n;i++){
            if(v[s[i]-'a']==0){
                v[s[i]-'a']+=1;
                dq.push_back(s[i]);
                c++;
                ans=max(ans,c);
            }
            else{
                while(v[s[i]-'a']!=0){
                    int t=dq.front()-'a';
                    dq.pop_front();
                    v[t]-=1;
                    c--;
                }
                i-=1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends