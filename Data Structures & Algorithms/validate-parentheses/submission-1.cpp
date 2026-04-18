class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    map<char,char> mp = {
        {'{' ,'}'},
        {'[' , ']'},
        {'(' , ')'}
    };

    char last = ' ';
    for(auto i : s){
        st.push(i);
        if(mp[last] == i){
            st.pop();
            st.pop();
        }
        if(st.empty()) last = ' ';
        else last = st.top();
    }
    // cout<<st.size();
    if(st.empty()) return 1;
    else return 0;
    }
};
