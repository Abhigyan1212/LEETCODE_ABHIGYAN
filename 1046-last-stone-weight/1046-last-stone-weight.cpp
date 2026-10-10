class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        while(s.size()>1){
            sort(s.begin(),s.end());
            int x=s.back();
            s.pop_back();
            int y=s.back();
            s.pop_back();
            if(x!=y){
                s.push_back(x-y);
            }
        }
        if(s.size()==0){
            return 0;
        }
        return s[0];
    }
};