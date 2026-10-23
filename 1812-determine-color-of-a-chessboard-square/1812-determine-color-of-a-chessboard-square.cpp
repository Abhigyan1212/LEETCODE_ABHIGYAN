class Solution {
public:
    bool squareIsWhite(string coor) {
        return (coor[0]+coor[1])%2!=0;
    }
};