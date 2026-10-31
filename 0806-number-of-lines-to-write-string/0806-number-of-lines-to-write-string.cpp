class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines=1,sum=0;
        for(int i=0;i<s.size();i++){
            sum+=widths[s[i]-'a'];
            if(sum>100){
                lines++;
                sum=widths[s[i]-'a'];
            }
        }
        return {lines,sum};
    }
};