class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> newnums;
        for(int i=0; i<nums.size()-1; i++){
           newnums.push_back((nums[i] + nums[i+1]) % 10);
        }
       int ans =  triangularSum(newnums);
       return ans;
    }
};