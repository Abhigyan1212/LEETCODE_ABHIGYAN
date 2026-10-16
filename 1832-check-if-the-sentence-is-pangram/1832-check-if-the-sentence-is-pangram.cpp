class Solution {
public:
    bool checkIfPangram(string s) {
        for(char ch='a';ch<='z';ch++){
            int find=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==ch){
                    find=1;
                    break;
                }
            }
            if(find==0)
            return false;
        }
        return true;
    }
};