class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int target = image[sr][sc];
        queue<pair<int,int>> q;
        q.push(pair<int,int>(sr,sc));
        map<pair<int,int>,bool> mp;
        mp[pair<int,int>(sr,sc)] = true;
        while(!q.empty()){
            pair curr = q.front();
            q.pop();
            if(curr.first - 1 >= 0 && image[curr.first-1][curr.second]==target){
                pair<int,int> temp(curr.first-1,curr.second);
                if(!mp[temp]){
                    q.push(temp);
                    mp[temp] = true;
                }
                
            }
            if(curr.first + 1 < image.size() && image[curr.first+1][curr.second]==target){
                pair<int,int> temp(curr.first+1,curr.second);
                if(!mp[temp]){
                    q.push(temp);
                    mp[temp] = true;
                }
                
            }
            if(curr.second + 1 < image[0].size() && image[curr.first][curr.second+1]==target){
                pair<int,int> temp(curr.first,curr.second+1);
                if(!mp[temp]){
                    q.push(pair<int,int>(curr.first,curr.second+1));
                    mp[temp] = true;
                }
                
            }
            if(curr.second - 1 >=0&& image[curr.first][curr.second-1]==target){
                pair<int,int> temp(curr.first,curr.second-1);
                if(!mp[temp]){
                    q.push(temp);
                    mp[temp] = true;
                }
                
            }
            image[curr.first][curr.second] = color;
        }
        return image;
    }
};
