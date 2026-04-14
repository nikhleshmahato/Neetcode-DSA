class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp,mpp;
        bool check = true;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : t){
            mpp[i]++;
        }
        if(mp.size() != mpp.size()) return false;
        for(auto i : mp){
            if(i.second != mpp[i.first]){
                check = false; 
            }
        }
        if(check) return true;
        else return false;
    }
};
