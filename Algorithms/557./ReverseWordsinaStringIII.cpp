class Solution {
public:
    string reverseWords(string s) {
        int start;
        for(int i=0;i<s.length();i++){
            start = i;
            while(i<s.length() && s[i]!=' '){
                i++;
            }
            int k=1;
            for(int j=start;j<start+((i-start)/2);j++){
                int temp = s[j];
                s[j] = s[i-k];
                s[i-k] = temp;
                k++;
            }
            
        }
        return s;
    }
};
