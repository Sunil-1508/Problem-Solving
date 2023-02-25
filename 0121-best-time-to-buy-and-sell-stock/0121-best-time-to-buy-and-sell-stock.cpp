class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=INT_MAX;
        int n=p.size();
        int pro=0;
        for(int i=0;i<n;i++){
            if(m>p[i]){
                m=p[i];
            }
            pro=max(pro,p[i]-m);
            
        }
        return pro;
    }
};