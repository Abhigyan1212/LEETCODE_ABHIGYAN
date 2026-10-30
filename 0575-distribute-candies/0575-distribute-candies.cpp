class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        set<int> s(candy.begin(),candy.end());
        return min((int)s.size(),(int)candy.size()/2);
    }
};