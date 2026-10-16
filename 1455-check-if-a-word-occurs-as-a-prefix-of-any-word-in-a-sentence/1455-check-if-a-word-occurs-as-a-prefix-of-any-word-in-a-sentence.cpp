class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i=0,word=1;
        while(i<sentence.size()){
            string s="";
            while(i<sentence.size() && sentence[i]!=' '){
                s+=sentence[i];
                i++;
            }
            if(s.find(searchWord)==0){
                return word;
            }
            word++;
            i++;
        }
        return -1;
    }
};