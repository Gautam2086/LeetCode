class Solution {
public:
    bool isValid(string s) {
        
        if(s.size() == 1)
            return false;
        
        stack<char> st;
        for(auto ch: s) 
        {
            if(ch == '(' || ch == '[' || ch == '{')
                st.push(ch);
            
            else
            {
                if(st.size() == 0)
                    return false; 
                if(ch==']' && st.top() != '[')    return false;
                if(ch=='}' && st.top() != '{')    return false;
                if(ch==')' && st.top() != '(')    return false;
                
                st.pop();
            }
            
        }
        if(st.size() == 0)
            return true;
        
        return false;
    }
};