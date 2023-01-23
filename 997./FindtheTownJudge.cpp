class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size() == 0){
            return 1;
        }
        vector<int> townGuys(n+1,0);
        map<int,bool> trusts;
        int judge=-1;
        for(int i=0;i<trust.size();i++){    
            townGuys[trust[i][1]]++;
            trusts[trust[i][0]]=true;
            if(townGuys[trust[i][1]] == n-1){
                judge = trust[i][1];
            }
        }
        return !trusts[judge] ? judge : -1;
    }
};
