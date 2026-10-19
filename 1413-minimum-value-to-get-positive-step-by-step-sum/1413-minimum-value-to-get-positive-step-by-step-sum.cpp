class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0,small=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<small){
                small=sum;
            }
        }
        return 1-small;
    }
};