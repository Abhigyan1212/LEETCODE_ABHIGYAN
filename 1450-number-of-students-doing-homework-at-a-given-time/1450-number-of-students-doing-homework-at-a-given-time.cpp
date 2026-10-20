class Solution {
public:
    int busyStudent(vector<int>& start, vector<int>& end, int query) {
        int count=0;
        for(int i=0;i<start.size();i++){
            if(start[i]<=query && end[i]>=query){
                count++;
            }
        }
        return count;
    }
};