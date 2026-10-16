class Solution {
public:
    int minimumSum(int num) {
        int a[4];
        for(int i=0;i<4;i++){
            a[i]=num%10;
            num/=10;
        }
        sort(a,a+4);
        return a[0]*10+a[2]+a[1]*10+a[3];
    }
};