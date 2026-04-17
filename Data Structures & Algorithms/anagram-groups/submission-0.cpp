class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto i : strs){
            string s = i;
            sort(i.begin(),i.end());
            mp[i].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
