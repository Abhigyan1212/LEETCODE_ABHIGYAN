class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini)
                mini=nums[i];
                sum=sum+nums[i];
        }
        return sum-nums.size()*mini;
    }
};