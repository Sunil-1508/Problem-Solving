//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& mat) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int> >mat2(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat2[i][j]=mat[i][j];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(mat2[i][j]==0){
                    if(i-1>=0){ mat[i][j]+=mat2[i-1][j];   mat[i-1][j]=0;  }
                    if(i+1<n) { mat[i][j]+=mat2[i+1][j];   mat[i+1][j]=0;}
                    if(j-1>=0){ mat[i][j]+=mat2[i][j-1];  mat[i][j-1]=0;}
                    if(j+1<m) { mat[i][j]+=mat2[i][j+1];    mat[i][j+1]=0;}
                    
                   
                    
                    
                   
                    
                }
                
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends