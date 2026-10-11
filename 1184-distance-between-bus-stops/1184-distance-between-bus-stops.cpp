class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total=0,path=0;
        if(start>destination){
            int temp=start;
            start=destination;
            destination=temp;
        }
        for(int i=0;i<distance.size();i++){
            total+=distance[i];
            if(i>=start && i<destination){
                path+=distance[i];
            }
        }
        return min(path,total-path);
    }
};