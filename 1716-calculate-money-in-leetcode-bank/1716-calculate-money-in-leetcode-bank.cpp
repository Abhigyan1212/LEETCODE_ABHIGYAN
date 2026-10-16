class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        int monday=1;
        while(n>0){
            int money=monday;
            for(int i=1;i<=7 && n>0;i++){
                total+=money;
                money++;
                n--;
            }
            monday++;
        }
        return total;
    }
};