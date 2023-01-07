class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalGas=0,totalCost=0;
        int currGas=0, startingPoint=0;
        for(int i=0;i<n;i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
            currGas+=gas[i]-cost[i];
            if(currGas<0){
                startingPoint=i+1;
                currGas=0;
            }
        }
        return (totalGas<totalCost)?-1:startingPoint;     
    }  
};
