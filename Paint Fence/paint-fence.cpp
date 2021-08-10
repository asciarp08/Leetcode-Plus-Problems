class Solution {
public:
    int numWays(int n, int k) {
        
        if(n==1)
            return k;
        
        int secondPrev = k;
        int firstPrev = k*k;
        
        for(int i= 3; i<=n; i++){
            int curWays = (k-1)*(firstPrev+secondPrev);
            secondPrev = firstPrev;
            firstPrev = curWays;
            
        }
        
        return firstPrev;
        
    }
};
