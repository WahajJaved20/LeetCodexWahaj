class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        //bfs solution time
        if(grid.size()==0){
            return 0;
        }
        queue<pair<int,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int totalCount=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push(pair<int,int>(i,j));
                }
                if(grid[i][j]!=0){
                    totalCount++;
                }
            }
        }
        if(totalCount == 0){
            return 0;
        }
        int minutes = 0;
        pair<int,int> directions[4] = {pair<int,int>(1,0),pair<int,int>(-1,0),pair<int,int>(0,1),pair<int,int>(0,-1)};
        int resultCount=0;
        while(!q.empty()){
            int size = q.size();
            resultCount+=size;
            for(int j=0;j<size;j++){
                pair<int,int> curr = q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    pair<int,int> temp(curr.first+directions[i].first,curr.second+directions[i].second);
                    if(temp.first <0 || temp.first >= m || temp.second <0 || temp.second >=n || grid[temp.first][temp.second]==0 || grid[temp.first][temp.second]==2){
                        continue;
                    }
                    grid[temp.first][temp.second] = 2;
                    q.push(temp);
                }
            }
            if(q.size()!=0){
                minutes++;
            }
        }
        cout<<resultCount<<"  "<<totalCount;
        return resultCount == totalCount ? minutes : -1;

    }
};
