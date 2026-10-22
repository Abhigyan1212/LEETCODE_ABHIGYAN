class Solution {
public:
    int countMatches(vector<vector<string>>& items, string key, string value) {
        int count=0;
        for(int i=0;i<items.size();i++){
            if(key=="type" && items[i][0]==value)
            count++;
            else if(key=="color" && items[i][1]==value)
            count++;
            else if(key=="name" && items[i][2]==value)
            count++;
        }
        return count;
    }
};