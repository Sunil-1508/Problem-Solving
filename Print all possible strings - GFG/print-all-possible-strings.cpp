//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/

void fun(int i,vector<string>&v,char str[],string s,int N){
    if(i==N){
        v.push_back(s);
        return;
    }
    fun(i+1,v,str,s+str[i],N);
    if(i!=N-1) fun(i+1,v,str,s+str[i]+" ",N);
    
}
vector<string>  spaceString(char str[])
{
//Your code here
    vector<string>v;
    int n=strlen(str);
    fun(0,v,str,"",n);
    return v;

}