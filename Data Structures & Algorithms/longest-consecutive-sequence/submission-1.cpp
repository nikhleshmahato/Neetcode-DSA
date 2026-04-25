class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        set<int> st;

        for(auto i : nums){
            st.insert(i);
        }

        int max = INT_MIN;
        int count = 0;
        int last = INT_MIN;
        for(auto i : st){
            if(last + 1 == i){
                count ++;
            }
            else{
                count = 0;
            }
            if(count > max){
                max = count;
            }
            last = i;
        }
        return max + 1;
    }
};
