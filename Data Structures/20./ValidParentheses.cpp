class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                p.push(s[i]);
            }else{
                if(s[i] == ')'){
                    if(!p.empty() && p.top() == '('){
                        p.pop();
                        continue;
                    }
                }else if(s[i] == '}'){
                    if(!p.empty() && p.top() == '{'){
                        p.pop();
                        continue;
                    }
                }else if(s[i] == ']'){
                    if(!p.empty() && p.top() == '['){
                        p.pop();
                        continue;
                    }
                }
                    return false;
            }
        }
        return p.empty() ? true : false;
    }
};
