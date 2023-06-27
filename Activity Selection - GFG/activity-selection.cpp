//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    struct itl{
     int st,ed;
    };
    static bool  cmp(itl a,itl b){
        if(a.ed<b.ed) return true;
        else if(a.ed==b.ed){
            if(a.st<b.st) return true;
        }
        return false;
    }
   
    int activitySelection(vector<int> s, vector<int> e, int n)
    {
        // Your code here
        
        vector<itl>p;
        for(int i=0;i<n;i++){
            p.push_back({s[i],e[i]});
        }
        sort(p.begin(),p.end(),cmp);
        int m=0;
        
        int i=0;
            int c=1,j=i,l=i;
            while(j<n-1){
                if(p[l].ed<p[j+1].st){  l=j+1; c++;}
                j++;
            }    
        
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends