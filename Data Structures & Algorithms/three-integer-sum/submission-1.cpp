class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size()-2; i++){
            int first = i;
            int sec = first + 1;
            int third = nums.size()-1;

            while(sec < third){
                if(nums[first] + nums[sec] + nums[third] == 0){
                    st.insert({nums[first],nums[sec], nums[third]});
                    third--;
                    sec = first + 1;
                }
                else if(nums[first] + nums[sec] + nums[third] > 0){
                    third--;
                    sec = first + 1;
                }
                else{
                    sec ++;
                }
            }
        }
        for(auto i : st){
            // cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
            ans.push_back({i[0],i[1],i[2]});
        }
        
        return ans;
    }
};