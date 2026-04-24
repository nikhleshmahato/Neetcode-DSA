class Solution {
public:
    static bool comp(const pair<int,int>&a, const pair<int,int>&b){
        return a.first > b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        unordered_map<int,int> mpp;
        for(auto &i : nums){
            mp[i]++;
        }
        vector<pair<int,int>> pr(mp.size());
        int j = 0;
        for(auto i : mp){
            pr[j].first = i.second;
            pr[j].second = i.first;
            j++;
        }
        // for(auto i : pr){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        sort(pr.begin(),pr.end(),comp);

        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(pr[i].second);
            cout<<ans[i]<<" ";
        }
        return ans;
    }
};