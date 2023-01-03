class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int i=0;i<strs[0].length();i++){
            string s;
            for(int j=0;j<strs.size();j++){
                s+=strs[j][i];
            }
            string x = s;
            sort(x.begin(),x.end());
            if(s != x){
                count++;
            }
        }
        return count;
    }
};
