class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0;
        int small=salary[0],large=salary[0];
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
            small=min(small,salary[i]);
            large=max(large,salary[i]);
        }
        sum=sum-small-large;
        return (double)sum/(salary.size()-2);
    }
};