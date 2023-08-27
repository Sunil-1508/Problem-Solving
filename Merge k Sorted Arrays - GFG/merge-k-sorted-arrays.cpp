//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    
    class data{
        public:
        int val,arr_no,arr_ind;
        data(int v,int n,int i){
            val=v;
            arr_no=n;
            arr_ind=i;
        }
    };
    
    struct  cmp{
        bool operator()(data &d1, data &d2){
        return d1.val>d2.val;
        }
    };
    
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int>ans;
        
        priority_queue<data, vector<data>, cmp>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(data(arr[i][0],i,0));
            
        }
        
        
        while(!pq.empty()){
        data t=pq.top();
        
        // { val, { arr_no , arr_ind } }
        
        pq.pop();
        
        
        ans.push_back(t.val);
        
        if(t.arr_ind+1<arr[t.arr_no].size()){
            pq.push(data(arr[t.arr_no][t.arr_ind+1],t.arr_no,t.arr_ind+1));
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
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends