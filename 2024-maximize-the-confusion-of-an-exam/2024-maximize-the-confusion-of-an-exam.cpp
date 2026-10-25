class Solution {
public:
    int maxConsecutiveAnswers(string key, int k) {
        int ans=0;
        int n=key.size();
        for(char ch:{'T','F'}){
            int i=0,count=0;
            for(int j=0;j<n;j++){
                if(key[j]!=ch){
                    count++;
                }
                while(count>k){
                    if(key[i]!=ch){
                        count--;
                    }
                    i++;
                }
                ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};