class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int n=people.size();
        int j=n-1;
        int number=0;
        while(i<=j)
        {
            if(people[j]<=limit)
            {
                if(people[j]+people[i]<=limit)
                {
                    i++;
                    number++;
                  
                }
                else
                {
                    number++;
                  
                }
                    
                j--;
                
                
            }
            else
            {
                j--;
            }
        }
    return number;
    }
};