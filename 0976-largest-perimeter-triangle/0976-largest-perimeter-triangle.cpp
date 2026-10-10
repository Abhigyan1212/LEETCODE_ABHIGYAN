class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // A triangle can be formed only if the sum of its two smaller sides is strictly greater than its largest side. ie (a+b)>c
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]<nums[i+1]+nums[i+2]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};