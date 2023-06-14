class Solution {
public:
    bool isValid(string s) {
        stack<char> stackOfs;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stackOfs.push(s[i]);
            }
            else{
                if(stackOfs.empty()){
                    return false;
                 }
                char temp = stackOfs.top();
                if((s[i]==')' && temp == '(') || (s[i]=='}' && temp == '{') || (s[i]==']' && temp == '[')){
                    stackOfs.pop();
                }else{
                    return false;
                }
                
            }
        }
        if(stackOfs.empty()){
            return true;
        }
        return false;
    }
};