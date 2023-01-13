class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        queue<string> q;
        q.push(s);
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                continue;
            }
            int size = q.size();
            for(int j=0;j<size;j++){
                string curr = q.front();
                q.pop();
                
                curr[i] = toupper(curr[i]);
                q.push(curr);
                curr[i] = tolower(curr[i]);
                q.push(curr);
            }
        }
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};
