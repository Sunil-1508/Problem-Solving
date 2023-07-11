#include<bits/stdc++.h>
using namespace std;
map<int,int>m;

const  bool cmp(int a,int b){
    if(m[a]>m[b]) return true;
    else if(m[a]<m[b]) return false;
    else{
        if(a<b) return true;
        else return false;
    }
}

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	    m.clear();
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        m[k]++;
	        v.push_back(k);
	    }
	    
	    sort(v.begin(),v.end(),cmp);
	    for(int i=0;i<n;i++){
	    cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	
}