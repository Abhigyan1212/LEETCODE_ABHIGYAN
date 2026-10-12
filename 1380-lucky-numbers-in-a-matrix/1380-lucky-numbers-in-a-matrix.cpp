class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& m) {
        vector<int> ans;
        for(int i=0;i<m.size();i++){
            int mn=m[i][0];
            int col=0;
            for(int j=0;j<m[i].size();j++){
                if(m[i][j]<mn){
                mn=m[i][j];
                col=j;
            }
        }
        bool lucky=true;
        for(int j=0;j<m.size();j++){
            if(m[j][col]>mn){
            lucky=false;
            break;
            }
        }
        if(lucky){
        ans.push_back(mn);
        }
    }
        return ans;
    }
};