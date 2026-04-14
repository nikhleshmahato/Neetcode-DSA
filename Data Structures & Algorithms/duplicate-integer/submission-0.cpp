class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        bool check = false ;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second >1){
                check = true;
                break;
            }
        }
        if(check) return true;
        else return false;
    }
};