class Solution {
public:
    int minTimeToType(string word) {
        int time=0;
        char pos='a';
        for(int i=0;i<word.size();i++){
            int diff=abs(word[i]-pos);
            time +=min(diff,26-diff)+1;
            pos=word[i];
        }
        return time;
    }
};