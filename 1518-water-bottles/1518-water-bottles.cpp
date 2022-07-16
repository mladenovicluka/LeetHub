class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ost=0;
        int suma=numBottles;
        while(numBottles>=numExchange)
        {
            
            suma+=numBottles/numExchange;
           // cout<<(numBottles/numExchange)*numExchange<<" "<<numBottles%numExchange<<" "<<numBottles/numExchange<<endl;
            numBottles=numBottles/numExchange+numBottles%numExchange;
            
        }
     //   cout<<numBottles;
        return suma;
    }
};