class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransomHash,magazineHash;
        ransomHash.resize(26);
        magazineHash.resize(26);
        if(magazine.length()<ransomNote.length()){
            return false;
        }
        for(int i=0;i<ransomNote.length();i++){
            ransomHash[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            magazineHash[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomHash.size();i++){
            if(ransomHash[i] > magazineHash[i]){
                return false;
            }
        }
        return true;
    }
};
