class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sHash,tHash;
        sHash.resize(26);
        tHash.resize(26);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            sHash[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            tHash[t[i]-'a']++;
        }
        for(int i=0;i<sHash.size();i++){
            if(sHash[i] != tHash[i]){
                return false;
            }
        }
        return true;
    }
};
