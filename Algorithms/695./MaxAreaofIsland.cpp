class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> visited;
        visited.resize(grid.size());
        for(int i=0;i<grid.size();i++){
            visited[i].resize(grid[i].size());
        }
        int maxCount = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    int count = dfs(grid,visited,i,j);
                    maxCount = max(count,maxCount);
                }
            }
        }
        return maxCount;
    }
    int dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j){
        int count = 1;
        visited[i][j] = true;
        if(i-1 >=0 && !visited[i-1][j] && grid[i-1][j] == 1){
            count += dfs(grid,visited,i-1,j);
        }
        if(i+1 < grid.size() && !visited[i+1][j] && grid[i+1][j] == 1){
            count += dfs(grid,visited,i+1,j);
        }
        if(j+1 < grid[i].size() && !visited[i][j+1] && grid[i][j+1] == 1){
            count += dfs(grid,visited,i,j+1);
        }
        if(j-1 >=0 && !visited[i][j-1] && grid[i][j-1] == 1){
            count += dfs(grid,visited,i,j-1);
        }
        return count;
    }

};
