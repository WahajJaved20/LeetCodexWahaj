class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1hash(26,0),s2hash(26,0);
        int start = 0;
        int current = 0;
        if(s1.length() > s2.length()){
            return false;
        }
        // calculating frequency of both strings
        while(current<s1.length()){
            s1hash[s1[current]-'a']++;
            s2hash[s2[current]-'a']++;
            current++;
        }
        // decrementing current to get to the border of the window
        current--;
        while(current<s2.length()){
            // vector comparison (returns yes if both hashes are equal (permute exists))
            current++;
            if(s1hash==s2hash){
                return true;
            }
            if(current == s2.length()){
                return false;
            }
            s2hash[s2[current]-'a']++;
            s2hash[s2[start++]-'a']--;
        }
        return false;
    }
};
