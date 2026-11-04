class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxNum=nums[0];
        int moves=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>maxNum)
                maxNum=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            moves=moves+(maxNum-nums[i]);
        }
        return moves;
    }
};