class Solution {
public:
    vector<int> distributeCandies(int candies, int num) {
        vector<int> ans(num,0);
        int give=1;
        int i=0;
        while(candies>0){
            if(candies>=give){
                ans[i]+=give;
                candies-=give;
            }
            else{
                ans[i]+=candies;
                candies=0;
            }
            give++;
            i++;
            if(i==num){
                i=0;
            }
        }
        return ans;
    }
};