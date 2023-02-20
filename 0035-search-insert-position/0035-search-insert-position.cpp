class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int m; 
        while(i<=j){
            m=(i+j)/2;
            if(nums[m]==t) return m;
            else if(t<nums[m]){
                j=m-1;
            }
            else if(t>nums[m]){
                i=m+1;
            }
        }
        return i;
    }
};