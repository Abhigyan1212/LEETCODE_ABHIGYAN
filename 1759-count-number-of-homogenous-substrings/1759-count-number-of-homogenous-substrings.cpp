class Solution {
public:
    int countHomogenous(string s) {
        int count=0,ans=0;
        int mod=1000000007;
        for(int i=0;i<s.size();i++){
            if(i>0 && s[i]==s[i-1]){
                count++;
            }
            else{
                count=1;
            }
            ans=(ans+count)%mod;
        }
        return ans;
    }
};