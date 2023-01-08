class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,bool> m;
        int length=0;
        int start=0;
        int longest = 0;
        for(int i=0;i<s.length();i++){
            if(!m[s[i]]){
                length++;
                m[s[i]] = true;
            }else if(m[s[i]] && s[i] != s[start]){
                if(length > longest)
                    longest=length;
                while(s[start] != s[i]){
                    m[s[start]] = false;
                    start++;
                    length = i-start;
                }
                start++;
            
            }else{
                start++;
            }
        }
        return max(length,longest);
    }
};
