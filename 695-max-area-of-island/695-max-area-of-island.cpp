class Solution {
public:
     void dfs(vector<vector<int>>& grid,int i ,int j,int *counter)
    {
        if(i>=0&&i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j])
        {
        
           (*counter)++;
            grid[i][j]=0;
             dfs(grid,i+1,j,counter);
             dfs(grid,i-1,j,counter);
             dfs(grid,i,j+1,counter);
             dfs(grid,i,j-1,counter);
            
            
            
            
        }
      
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
          int counter=0;
        int maks=0;
        
         for(int i=0;i<grid.size();i++)
        {
           
            for(int j=0;j<grid[0].size();j++)
            {
               if(grid[i][j])
               {
                 counter=0;
                   dfs(grid,i,j,&counter);
              
                maks=max(maks,counter);
               }
            
            }
           
        }
        return maks;
    
    }
};