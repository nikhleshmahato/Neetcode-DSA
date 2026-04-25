class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums.size());
        vector<int>pos(nums.size());
        int last = 1;
        pre[0] = last;
        pos[nums.size()-1] = last;
        for(int i=0; i<nums.size()-1; i++){
            pre[i+1] = last * nums[i];
            last = pre[i+1];
        }
        last = 1;
        for(int i=nums.size()-1;i>0; i--){
            pos[i-1] = last * nums[i];
            last = pos[i-1];
        }
        // vector<int>ans(nums.size());
        for(int i=0; i<nums.size(); i++){
            nums[i] = pre[i] * pos[i];
        }
        return nums;
    }
};
