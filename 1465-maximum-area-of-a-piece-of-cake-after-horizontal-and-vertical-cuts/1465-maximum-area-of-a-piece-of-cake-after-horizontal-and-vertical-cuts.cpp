class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());
        int last=0;
        int makssirina=0;
        for(auto x:verticalCuts)
        {
            if(x-last>makssirina)makssirina=x-last; 
            last=x;    
        }
        if(w-last>makssirina)makssirina=w-last;
        last=0;
        int maksduzina=0;
        for(auto x:horizontalCuts)
        {
            if(x-last>maksduzina)maksduzina=x-last; 
            last=x;    
        }
        if(h-last>maksduzina)maksduzina=h-last;
        return (1LL*maksduzina*makssirina) % 1000000007;
        
    }
};