//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int n=src.size();
  string ans=string(1,src[0]);
  int c=1;
  for(int i=1;i<n+1;i++){
      if(src[i]!=src[i-1]){
          char k=c+'0';
          ans=ans+k+src[i];
          c=1;
      }
      else{
          c++;
      }
      
  }
   
  return ans;
}     
 
