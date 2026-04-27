class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<string>st;

        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" ||tokens[i] == "*" ||tokens[i] == "/"){
                int first = stoi(st.top());
                st.pop();
                int sec = stoi(st.top());
                st.pop();

                if(tokens[i] == "+") st.push(to_string(first + sec));
                else if(tokens[i] == "-") st.push(to_string(sec - first)); // swap matters
                else if(tokens[i] == "*") st.push(to_string(first * sec));
                else st.push(to_string(sec / first)); // swap matters
            }
            else{
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};